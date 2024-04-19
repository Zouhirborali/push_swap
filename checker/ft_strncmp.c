/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:12:51 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/24 15:47:13 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static size_t	ft_strlen(char	*str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			x;
	unsigned char	*str1;
	unsigned char	*str2;

	if (!n)
		return (0);
	if (ft_strlen((char *)s1)-1!=n)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	x = 0;
	while ((str1[x] || str2[x]) && n > x)
	{
		if (str1[x] != str2[x])
		{
			return (0);
		}
		x++;
	}
	return (1);
}
