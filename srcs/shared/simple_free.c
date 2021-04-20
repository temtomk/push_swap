/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:45:17 by zdnaya            #+#    #+#             */
/*   Updated: 2021/04/19 21:30:25 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_arg(char **arg)
{
    if (*arg)
        free(*arg);
    *arg = NULL;
}

void ft_free_split(char **split)
{
	int		i;

	i = 0;
	while (split[i])
	{
        free(split[i]);
        i++;
    }
    free(split);
}

void free_single_stack(t_stack **stack)
{
    free(*stack);
    *stack = NULL;
}

void free_stack(t_stack **stack)
{
    t_stack *tmp;

    if (*stack)
    {
        while (*stack)
        {
            tmp = (*stack)->next;
            free(*stack);
            *stack = NULL;
            (*stack) = tmp;
        }
        free(*stack);
        *stack = NULL;
    }
}


void the_end(t_stack **a, t_stack **b, char **line, t_all *all)
{
    free_stack(a);
    free_stack(b);
    free_arg(line);
    free(all);
    all = NULL;
    exit(0);
}