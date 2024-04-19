/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:55:11 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/19 16:59:56 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rotate_down(t_list **list)
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
}

void	rotate_down_tow(t_list **list_a, t_list **list_b)
{
	rotate_down(list_a);
	rotate_down(list_b);
}

void	rotate_up(t_list **list)
{
	t_list	*last;

	last = *list;
	while (last->next != NULL)
		last = last->next;
	last->next = *list;
	*list = (*list)->next;
	last->next->next = NULL;
}

void	rotate_up_tow(t_list **list_a, t_list **list_b)
{
	rotate_up(list_a);
	rotate_up(list_b);
}
