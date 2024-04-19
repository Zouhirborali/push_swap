/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:54:19 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/26 15:45:45 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->value = content;
	new_node->next = NULL;
	return (new_node);
}


static void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*re;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	re = *lst;
	while (re->next)
	{
		re = re->next;
	}
	re->next = new;
	lst = &re;
}

t_list	*get_arg(char **str, int count)
{
	t_list	*re;
	int		i;

	re = NULL;
	i = 1;
	while (count >= i)
	{
		ft_lstadd_back(&re, ft_lstnew(ft_atoi(str[i])));
		i++;
	}
	return (re);
}

