/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkear_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:54:22 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/23 16:05:07 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	git_count(t_list *ll)
{
	int		x;
	t_list	*list;

	x = 0;
	list = ll;
	while (list)
	{
		x++;
		list = list->next;
	}
	return (x);
}

static int	sorrrt_o(t_list **stack_a, t_list **stack_b, char *str)
{
	if (ft_strncmp(str, "sa", 2))
		swap_node(stack_a);
	else if (ft_strncmp(str, "sb", 2))
		swap_node(stack_b);
	else if (ft_strncmp(str, "ss", 2))
		swap_tow(stack_a, stack_b);
	else if (ft_strncmp(str, "rra", 3))
		rotate_down(stack_a);
	else if (ft_strncmp(str, "rrb", 3))
		rotate_down(stack_b);
	else if (ft_strncmp(str, "rrr", 3))
		rotate_down_tow(stack_a, stack_b);
	else if (ft_strncmp(str, "rb", 2))
		rotate_up(stack_b); 
	else if (ft_strncmp(str, "ra", 2))
		rotate_up(stack_a);
	else if (ft_strncmp(str, "rr", 2))
		rotate_up_tow(stack_a, stack_b);
	else if (ft_strncmp(str, "pa", 2))
		push_to_a(stack_b, stack_a);
	else if (ft_strncmp(str, "pb", 2))
		push_to_b(stack_a, stack_b);
	else
		return (1);
	return (0);
}

int	sorrrt(t_list **stack_a, t_list **stack_b)
{
	char	*str;
	int		x;

	x = 0;
	while (1)
	{
		str = get_next_line(0);
		if (!str || str[0] == '\0')
			break ;
		if (sorrrt_o(stack_a, stack_b, str))
			return (free(str), 1);
		x++;
		free(str);
	}
	return (0);
}

int	check_sort_node(t_list *list)
{
	while (list)
	{
		if (list->next && list->value > list->next->value)
			return (1);
		list = list->next;
	}
	return (0);
}

int	main(int arv, char **arc)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (arv - 1 == 0)
		return (0);
	if (cou_args(arc, arv - 1) == 0 || check_errore(arc, arv - 1))
		return (write(2, "Error\n", 6), 0);
	stack_a = get_arg(arc, arv - 1);
	if (sorrrt(&stack_a, &stack_b))
		return (write(2, "Error\n", 6), 0);
	if (!check_sort_node(stack_a) && stack_b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_lstclear(&stack_a);
}
