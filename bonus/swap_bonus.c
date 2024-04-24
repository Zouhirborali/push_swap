/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:55:16 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/23 12:41:08 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	swap_node(t_list **stack)
{
	t_list	*elm1;
	t_list	*elm2;

	if (git_count(*stack) <= 1)
		return ;
	elm1 = *stack;
	*stack = (*stack)->next;
	elm2 = *stack;
	*stack = (*stack)->next;
	elm1->next = *stack;
	elm2->next = elm1;
	*stack = elm2;
}

void	swap_tow(t_list **list_a, t_list **list_b)
{
	if (git_count(*list_a) <= 1 && git_count(*list_b) <= 1)
		return ;
	if (git_count(*list_a) <= 1 && git_count(*list_b) > 1)
		swap_node(list_b);
	else if (git_count(*list_a) > 1 && git_count(*list_b) <= 1)
		swap_node(list_a);
	else
	{
		swap_node(list_a);
		swap_node(list_b);
	}
}
