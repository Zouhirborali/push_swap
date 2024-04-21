/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:40:09 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/21 14:09:22 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_treu_el(t_list **stack_a)
{
	int	i1;
	int	i2;
	int	i3;

	i1 = (*stack_a)->value;
	i2 = (*stack_a)->next->value;
	i3 = (*stack_a)->next->next->value;
	if (i1 > i2 && i1 < i3)
		swap_node(stack_a, 'a');
	else if (i1 < i2 && i1 > i3)
		rotate_down(stack_a, 'a');
	else if (i1 < i2 && i2 > i3 && i1 < i3)
	{
		rotate_down(stack_a, 'a');
		swap_node(stack_a, 'a');
	}
	else if (i1 > i2 && i1 > i3 && i2 > i3)
	{
		rotate_up(stack_a, 'a');
		swap_node(stack_a, 'a');
	}
	else if (i1 > i2 && i1 > i3 && i2 < i3)
		rotate_up(stack_a, 'a');
}

void	sort_five_el(t_list **stack_a, t_list **stack_b, int coun)
{
	while (git_count(*stack_a) > 3)
	{
		if ((*stack_a)->index > 2)
			rotate_up(stack_a, 'a');
		else
			push_to_b(stack_a, stack_b);
	}
	sort_treu_el(stack_a);
	push_to_a(stack_b, stack_a);
	if (coun == 5)
		push_to_a(stack_b, stack_a);
	if ((*stack_a)->index > (*stack_a)->next->index)
		swap_node(stack_a, 'a');
}

static void	mm(t_list **stack_a, t_list **stack_b, int coun)
{
	int	ii;
	int	x;

	x = 1;
	if (coun <= 200)
		ii = 15;
	else
		ii = 32;
	part_one(stack_a, stack_b, x, ii);
	part_tow(stack_a, stack_b);
}

int	main(int arv, char **arc)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (arv - 1 == 0)
		return (0);
	if (cou_args(arc, arv - 1) == 1 && !check_errore(arc, arv - 1))
		return (0);
	if (cou_args(arc, arv - 1) == 0 || check_errore(arc, arv - 1))
		return (write(2, "Error\n", 6), 0);
	if (check_sort(arc, arv - 1))
		return (0);
	if (cou_args(arc, arv - 1) == 2)
		return (printf("sa\n"), 0);
	stack_a = get_arg(arc, arv - 1);
	add_index(&stack_a);
	if (cou_args(arc, arv - 1) == 3)
		return (sort_treu_el(&stack_a), 0);
	if (cou_args(arc, arv - 1) == 5 || cou_args(arc, arv - 1) == 4)
		return (sort_five_el(&stack_a, &stack_b, cou_args(arc, arv - 1)), 0);
	mm(&stack_a, &stack_b, cou_args(arc, arv - 1));
	ft_lstclear(&stack_a);
}

/*
/////////////////////////////////////////////////////
 printf("=========a==========\n");
ft_lstiter(stack_a,printt);
printf("=========b==========\n");
ft_lstiter(stack_b,printt);*/