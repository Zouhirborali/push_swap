/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:39:19 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/19 15:09:45 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	longgg(unsigned long long int re, int sin, const char *str, int x)
{
	while (str[x] >= 48 && str[x] <= 57)
	{
		re *= 10;
		re += str[x] - 48;
		x++;
	}
	re *= sin;
	if (re > 2147483647 && re < -2147483648)
		return (0);
	return (re);
}

int	ft_atoi(const char *str)
{
	int						x;
	unsigned long long int	re;
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
