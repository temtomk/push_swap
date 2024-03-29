/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_disp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taemkim <taemkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 23:54:52 by taemkim           #+#    #+#             */
/*   Updated: 2021/05/31 23:55:02 by taemkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	part1_1_d(t_stack **a, t_stack **b, int len)
{
	int		size;
	int		m;
	t_stack	*tmp;
	t_stack	*tmps;

	size = len;
	while (size >= val_aprox(len / 4))
	{
		tmps = dup_list(*a);
		m = get_pivot(tmps);
		while (check_under_pivot((*a), m) && (*a))
		{
			if ((*a)->number <= m)
			{
				tmp = *a;
				s_c_display(a, b, 1);
				size--;
				free(tmp);
			}
			else
				norm_part1_c(a, b, m, 0);
		}
		free_stack(&tmps);
	}
}

void	part1_2_d(t_stack **a, t_stack **b, int size)
{
	int		min;
	t_stack	*tmp;

	tmp = NULL;
	while (*a && !check_sort(a, size))
	{
		min = get_min(*a);
		tmp = (*a)->next;
		while ((*a)->number != min && tmp && tmp->number == min)
			s_c_display(a, b, 8);
		while (size_list(*a) && check_under_pivot((*a), min))
		{
			if ((*a)->number == min)
			{
				tmp = *a;
				s_c_display(a, b, 1);
				free(tmp);
				size--;
			}
			else
				norm_part1_c(a, b, min, 0);
		}
	}
}

void	part1_3_d(t_stack **a, t_stack **b, int max)
{
	t_stack	*tmp;

	tmp = NULL;
	while (*b)
	{
		max = get_max(*b);
		while (check_upper_pivot((*b), max))
		{
			max = get_max(*b);
			tmp = (*b)->next;
			while ((*b)->number != max && tmp && tmp->number == max)
				s_c_display(a, b, 7);
			while (((*b)->number != max) && *b)
				norm_part3_c(a, b, max, 0);
			while (*b && (*b)->number == max)
			{
				tmp = *b;
				s_c_display(a, b, 4);
				max = get_max(*b);
				free(tmp);
			}
		}
	}
}

void	algo_1_d(t_stack **a, t_stack **b, int len)
{
	int	m;

	m = 0;
	part1_3_d(a, b, len);
	part1_2_d(a, b, len);
	part1_3_d(a, b, m);
	free_stack(a);
	free_stack(b);
}
