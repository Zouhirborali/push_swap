/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:55:16 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/20 16:36:09 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	swap_node(t_list **stack)
{
	t_list	*elm1;
	t_list	*elm2;

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
	swap_node(list_a);
	swap_node(list_b);
}
