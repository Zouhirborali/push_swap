/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:40:12 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/19 10:40:13 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	swap_node(t_list **list, char c)	
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
}
*/