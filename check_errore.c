/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errore.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:37:09 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/19 10:37:10 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

char * args(char **str,int l)
{
	char * re;
	int	i;
	int x;
	int xx;

	xx =0;
	i =1;
	while (str[i])
	{
		x =0;
		while (str[i][x])
		{
			x++;
			xx++;
		}
		i++;
	}
	i =1;
	x =0;
	re = malloc(xx+l+1);
	xx =0;
	while (str[i])
	{
		x =0;
		while (str[i][x])
			re[xx++]=str[i][x++];
		re[xx++]=' ';
		i++;
	}
	re[xx]='\0';
	return re;
}

static int	check_dople(char **str, int x)
{
	int	i;
	int	j;
	char *ss;
	char **s;

	i = 0;
	j = 0;
	ss =args(str,x);
	s =ft_split(ss,' ');
	while (s[j])
	{
		i = 1;
		if(ft_atoi(s[j]) > 2147483647 && ft_atoi(s[j]) < -2147483648)
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

int	check_errore(char **str, int x)
{
	int	i;
	int	j;
	char *ss;
	char **s;
	
	i = 0;
	j = 0;
	ss =args(str,x);
	s =ft_split(ss,' ');
	// printf("ss===%ss\n",ss);
	while (s[j])
	{
		i = 0;
		while (s[j][i])
		{
			if (i ==0 && (s[j][i] =='-' || s[j][i]=='+')) 
				i++;
			if(!(s[j][i] >= '0' && s[j][i] <= '9'))
				return (free(ss), free(s), 1);
			i++;
		}
		j++;
	}
	return (free(ss), free(s), check_dople(str,x));
}

int	check_sort(char **str, int x)
{
	int	i;
	char *ss;
	char **s;

	i =0;
	ss =args(str,x);
	//printf("ss===%ss\n",ss);
	s =ft_split(ss,' ');
	while (s[i])
	{
		if (s[i + 1] && ft_atoi(s[i]) > ft_atoi(s[i + 1]))
			return (free(ss), free(s), 0);
		i++;
	}
	return (free(ss), free(s), 1);
}

