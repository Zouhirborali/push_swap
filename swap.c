/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:40:12 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/20 16:35:45 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_node(t_list **stack, char c)
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
	if (c == 'a')
		printf("sa\n");
	else if (c == 'b')
		printf("sb\n");
}
/*
void swap_tow(t_list **list_a,t_list **list_b)
{
	// swap_node(list_a,' ');
	// swap_node(list_b,' ');
	printf("ss\n");
}*/