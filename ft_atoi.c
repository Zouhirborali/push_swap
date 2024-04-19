/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:39:19 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/19 10:39:22 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	unsigned long	longgg(unsigned long re, int sin, const char *str, int x)
{
	while (str[x] >= 48 && str[x] <= 57)
	{
		re *= 10;
		re += str[x] - 48;
		if (re > 9223372036854775807 && sin == -1)
			return (0);
		if (re > 9223372036854775807 && sin == 1)
			return (-1);
		x++;
	}
	return (re * sin);
}

unsigned long	ft_atoi(const char *str)
{
	int						x;
	unsigned long	re;
	int						sin;

	x = 0;
	re = 0;
	sin = 1;
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == 32)
		x++;
	if (str[x] == '-')
	{
		sin *= -1;
		x++;
	}
	else if (str[x] == '+')
		x++;
	return (longgg(re, sin, str, x));
}
