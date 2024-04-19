/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_center.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:40:22 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/19 10:55:44 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	git_count(t_list *ll)
{
	int		x;
	t_list	*list;

	x = 0;
	list = ll;
	while (list)
	{
		x++;
		list = list->next;
	}
	return (x);
}

static	void	swap_array(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static	void	bubble_sort(int arr[], int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (arr[j] > arr[j + 1])
				swap_array(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
}

int	*nod_sort(t_list *list)
{
	int	x;
	int	g;
	int	*arr;

	g = git_count(list);
	arr = malloc((g + 1) * 4);
	x = 0;
	while (list)
	{
		arr[x] = list->value;
		x++;
		list = list->next;
	}
	arr[x] = 0;
	bubble_sort(arr, g);
	return (arr);
}

int	check_if_range(t_list *list, int i, int s)
{
	int	x;
	int	*t;
	int	l;
	int	re;

	re = 0;
	t = malloc(((i * 2) + 2) * 4);
	l = s + i;
	s = s - i;
	x = 0;
	if (s < 0)
		s = 1;
	while (s <= l)
		t[x++] = s++;
	t[x] = 0;
	while (list && re == 0)
	{
		x = 0;
		while (t[x] && re == 0)
			if (t[x++] == list->index)
				re = 1;
		list = list->next;
	}
	return (free(t), re);
}
