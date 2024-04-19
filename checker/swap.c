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

void	swap_node(t_list **list)	
{
	t_list	tt1;
	t_list	tt2;
	t_list	*tt;
	t_list	*re;

	tt = *list;
	tt1.next = tt;
	tt2.next = tt->next;
	tt = tt->next->next;
	re = tt2.next;
	re->next = tt1.next;
	re->next->next = tt;
	*list = re;
}

void swap_tow(t_list **list_a,t_list **list_b)
{
	swap_node(list_a);
	swap_node(list_b);
}
