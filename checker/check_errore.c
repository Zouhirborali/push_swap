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

static int	check_dople(char **str, int x)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (x >= j)
	{
		i = 1;

		while (str[i])
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]) && i != j)
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}

int	check_errore(char **str, int x)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (x >= j)
	{
		i = 0;
		while (str[j][i])
		{
			if (!(str[j][i] >= '0' && str[j][i] <= '9'))
				return (1);
			i++;
		}
		j++;
	}
	return (check_dople(str, x));
}

int	check_sort(char **str, int x)
{
	int	i;

	i =1;
	while (x >= i)
	{
		if (str[i + 1] && ft_atoi(str[i]) > ft_atoi(str[i + 1]))
			return (0);
		i++;
	}
	return (1);
}