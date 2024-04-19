/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:55:03 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/19 16:55:05 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	push_to_a(t_list **list1, t_list **list2)
{
	t_list	*temp;	

	temp = *list1;
	*list1 = (*list1)->next;
	temp->next = *list2;
	*list2 = temp;
}

void	push_to_b(t_list **list1, t_list **list2)
{
	t_list	*temp;	

	temp = *list1;
	*list1 = (*list1)->next;
	temp->next = *list2;
	*list2 = temp;
}
