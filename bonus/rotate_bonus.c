/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:55:11 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/23 12:40:54 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	rotate_down(t_list **list)
{
	t_list	*tt;
	t_list	*last;

	if (git_count(*list) <= 1)
		return ;
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
	if (git_count(*list_a) <= 1 && git_count(*list_b) <= 1)
		return ;
	if (git_count(*list_a) <= 1 && git_count(*list_b) > 1)
		rotate_down(list_b);
	else if (git_count(*list_a) > 1 && git_count(*list_b) <= 1)
		rotate_down(list_a);
	else
	{
		rotate_down(list_a);
		rotate_down(list_b);
	}
}

void	rotate_up(t_list **list)
{
	t_list	*last;

	if (git_count(*list) <= 1)
		return ;
	last = *list;
	*list = (*list)->next;
	last->next = NULL;
	ft_lstadd_back(list, last);
}

void	rotate_up_tow(t_list **list_a, t_list **list_b)
{
	if (git_count(*list_a) <= 1 && git_count(*list_b) <= 1)
		return ;
	if (git_count(*list_a) <= 1 && git_count(*list_b) > 1)
		rotate_up(list_b);
	else if (git_count(*list_a) > 1 && git_count(*list_b) <= 1)
		rotate_up(list_a);
	else
	{
		rotate_up(list_a);
		rotate_up(list_b);
	}
}
