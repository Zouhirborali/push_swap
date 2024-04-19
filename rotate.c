/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:40:15 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/19 10:56:26 by zbakkas          ###   ########.fr       */
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
		printf("rra\n");
	else if (c == 'b')
		printf("rrb\n");
}

void	rotate_down_tow(t_list **list_a, t_list **list_b)
{
	rotate_down(list_a, ' ');
	rotate_down(list_b, ' ');
	printf("rrr\n");
}

void	rotate_up(t_list **list, char c)
{
	t_list	*last;

	last = *list;
	while (last->next != NULL)
		last = last->next;
	last->next = *list;
	*list = (*list)->next;
	last->next->next = NULL;
	if (c == 'a')
		printf("ra\n");
	else if (c == 'b')
		printf("rb\n");
}

void	rotate_up_tow(t_list **list_a, t_list **list_b)
{
	rotate_up(list_a, ' ');
	rotate_up(list_b, ' ');
	printf("rr\n");
}
