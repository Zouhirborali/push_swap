/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:38:58 by zbakkas           #+#    #+#             */
/*   Updated: 2024/04/19 10:39:01 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	plas_max(int max, t_list *list)
{
	int	x;

	x = 0;
	while (list)
	{
		x++;
		if (list->index == max)
			break ;
		list = list->next;
	}
	return (x);
}

void	part_tow(t_list **stack_a, t_list **stack_b)
{
	int	plass;

	while (git_count(*stack_b))
	{
		if ((*stack_b)->index == git_count(*stack_b))
			push_to_a(stack_b, stack_a);
		else if ((*stack_b)->next->index == git_count(*stack_b))
		{
			swap_node(stack_b, 'b');
			push_to_a(stack_b, stack_a);
		}
		else
		{
			plass = plas_max(git_count(*stack_b), *stack_b);
			if (plass <= git_count(*stack_b) / 2)
				while ((*stack_b)->index != git_count(*stack_b))
					rotate_up(stack_b, 'b');
			else
				while ((*stack_b)->index != git_count(*stack_b))
					rotate_down(stack_b, 'b');
		}
	}
}

void	part_one(t_list **stack_a, t_list **stack_b, int x, int ii)
{
	while (git_count(*stack_a))
	{
		if((*stack_a)->index>=x && (*stack_a)->index<=x+ii)
		{
			push_to_b(stack_a,stack_b);
			x++;	
		}
		else if((*stack_a)->index < x)
		{
			push_to_b(stack_a, stack_b);
			if(git_count(*stack_a) && (*stack_a)->index > x)
				rotate_up_tow(stack_a, stack_b);
			else
				rotate_up(stack_b, 'b');
			x++;	
		}
		else
		{
			rotate_up(stack_a, 'a');
		}
	}
}
