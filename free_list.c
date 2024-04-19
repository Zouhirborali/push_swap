/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:39:11 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/19 10:53:28 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_lstdelone(t_list *lst)
{
	if (!lst)
		return ;
	free(lst);
}

void	ft_lstclear(t_list **lst)
{
	t_list	*nexttte;

	if (!lst)
		return ;
	while (*lst)
	{
		nexttte = (*lst)->next;
		ft_lstdelone(*lst);
		*lst = nexttte;
	}
	*lst = NULL;
}
