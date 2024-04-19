/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:40:31 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/19 10:40:32 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

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

void	add_index(t_list **list)
{
	t_list	*listt;
	int		*ll;
	int		x;
	int		xx;

	listt = *list;
	ll = nod_sort(*list);
	xx = git_count(listt);
	while (listt)
	{
		x = 0;
		while (xx > x)
		{
			if (listt->value == ll[x])
				break ;
			x++;
		}
		listt->index = x + 1;
		listt = listt->next;
	}
	free(ll);
}
