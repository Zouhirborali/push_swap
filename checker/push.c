/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:44:15 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/23 20:03:06 by zbakkas          ###   ########.fr       */
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
