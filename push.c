/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:40:18 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/19 10:55:58 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_a(t_list **list1, t_list **list2)
{
	t_list	*temp;	

	temp = *list1;
	*list1 = (*list1)->next;
	temp->next = *list2;
	*list2 = temp;
	printf("pa\n");
}

void	push_to_b(t_list **list1, t_list **list2)
{
	t_list	*temp;	

	temp = *list1;
	*list1 = (*list1)->next;
	temp->next = *list2;
	*list2 = temp;
	printf("pb\n");
}
