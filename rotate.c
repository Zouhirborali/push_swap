/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:40:15 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/23 16:03:04 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_down(t_list **list, char c)
{
	t_list	*tt;
	t_list	*last;

	tt = *list;
	while (tt->next)
	{
		last = tt;
		tt = tt->next;
	}
	last->next = NULL;
	tt->next = *list;
	*list = tt;
	if (c == 'a')
		write(1, "rra\n", 4);
	else if (c == 'b')
		write(1, "rrb\n", 4);
}

void	rotate_down_tow(t_list **list_a, t_list **list_b)
{
	rotate_down(list_a, ' ');
	rotate_down(list_b, ' ');
	write(1, "rrr\n", 4);
}

void	rotate_up(t_list **list, char c)
{
	t_list	*last;

	last = *list;
	*list = (*list)->next;
	last->next = NULL;
	ft_lstadd_back(list, last);
	if (c == 'a')
		write(1, "ra\n", 3);
	else if (c == 'b')
		write(1, "rb\n", 3);
}

void	rotate_up_tow(t_list **list_a, t_list **list_b)
{
	rotate_up(list_a, ' ');
	rotate_up(list_b, ' ');
	write(1, "rr\n", 3);
}
