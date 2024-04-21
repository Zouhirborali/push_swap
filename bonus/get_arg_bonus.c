/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arg_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:40:25 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/21 13:23:40 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
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
	char	**s;
	int		x;

	re = NULL;
	i = 1;
	while (count >= i)
	{
		x = 0;
		s = ft_split(str[i], ' ');
		while (s[x])
			ft_lstadd_back(&re, ft_lstnew(ft_atoi(s[x++])));
		free_s(s);
		i++;
	}
	return (re);
}

int	cou_args(char **str, int x)
{
	char	*ss;
	char	**s;
	int		i;

	i = 0;
	ss = args(str, x);
	s = ft_split(ss, ' ');
	while (s[i])
	{
		i++;
	}
	free(ss);
	free_s(s);
	return (i);
}

static int	tt(char **str)
{
	int	xx;
	int	i;
	int	x;

	xx = 0;
	i = 1;
	while (str[i])
	{
		x = 0;
		while (str[i][x])
		{
			x++;
			xx++;
		}
		i++;
	}
	return (xx);
}

char	*args(char **str, int l)
{
	char	*re;
	int		i;
	int		x;
	int		xx;

	xx = 0;
	i = 1;
	x = 0;
	re = malloc(tt(str) + l + 1);
	while (str[i])
	{
		x = 0;
		while (str[i][x])
			re[xx++] = str[i][x++];
		re[xx++] = ' ';
		i++;
	}
	re[xx] = '\0';
	return (re);
}
