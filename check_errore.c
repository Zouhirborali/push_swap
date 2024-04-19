/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errore.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:37:09 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/19 18:12:25 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_dople(char **str, int x)
{
	int		i;
	int		j;
	char	*ss;
	char	**s;

	i = 0;
	j = 0;
	ss = args(str, x);
	s = ft_split(ss, ' ');
	while (s[j])
	{
		i = 1;
		if (ft_atoi(s[j]) == 0 && ft_strlen(s[j]) >= 10)
			return (free(ss), free(s), 1);
		while (s[i])
		{
			if (ft_atoi(s[i]) == ft_atoi(s[j]) && i != j)
				return (free(ss), free(s), 1);
			i++;
		}
		j++;
	}
	return (free(ss), free(s), 0);
}

int	check_empte(char **str)
{
	int	i;
	int	j;
	int	l;

	i = 1;
	while (str[i])
	{
		j = 0;
		l = 0;
		while (str[i][j])
		{
			if (str[i][j] != ' ')
				l++;
			j++;
		}
		if (!l)
			return (1);
		i++;
	}
	return (0);
}

int	check_errore(char **str, int x)
{
	int		i;
	int		j;
	char	*ss;
	char	**s;

	i = 0;
	j = 0;
	ss = args(str, x);
	s = ft_split(ss, ' ');
	while (s[j])
	{
		i = 0;
		while (s[j][i])
		{
			if (i == 0 && (s[j][i] == '-' || s[j][i] == '+')) 
				i++;
			if (!(s[j][i] >= '0' && s[j][i] <= '9'))
				return (free(ss), free(s), 1);
			i++;
		}
		j++;
	}
	if (check_empte(str))
		return (free(ss), free(s), 1);
	return (free(ss), free(s), check_dople(str, x));
}

int	check_sort(char **str, int x)
{
	int		i;
	char	*ss;
	char	**s;

	i = 0;
	ss = args(str, x);
	s = ft_split(ss, ' ');
	while (s[i])
	{
		if (s[i + 1] && ft_atoi(s[i]) > ft_atoi(s[i + 1]))
			return (free(ss), free(s), 0);
		i++;
	}
	return (free(ss), free(s), 1);
}
