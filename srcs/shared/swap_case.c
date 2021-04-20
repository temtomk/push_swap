/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 10:08:35 by zdnaya            #+#    #+#             */
/*   Updated: 2021/04/19 23:55:59 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void switch_case_norm(t_stack **a, t_stack **b, int w, t_all *all)
{
    t_stack *tmp;

    tmp = NULL;
    if (w == 4)
    {
        ft_putstr_fd("pa\n", all->fd);
        push_stack(b, a, tmp);
        free(tmp);
        tmp = NULL;
    }
    else if (w == 5 && size_list(*b) > 1)
    {
        ft_putstr_fd("rb\n", all->fd);
        r_stack(b, tmp);
        free(tmp);
        tmp = NULL;
    }
    else if (w == 6 && size_list(*b) > 1)
    {
        ft_putstr_fd("rrb\n", all->fd);
        rr_stack(b, tmp);
        free(tmp);
        tmp = NULL;
    }
    else if (w == 7 && size_list(*b) > 1)
    {
        ft_putstr_fd("sb\n", all->fd);
        swap_stack(b);
    }
    else if (w == 8 && size_list(*a) > 1)
    {
        ft_putstr_fd("sa\n", all->fd);
        swap_stack(a);
    }
}

void switch_case(t_stack **a, t_stack **b, int w, t_all *all)
{
    t_stack *tmp;
    
    tmp = NULL;
    if (w == 1)
    {
            ft_putstr_fd("pb\n", all->fd);
            push_stack(a, b, tmp);
            free(tmp);
            tmp = NULL;
    }
    else if (w == 2)
    {
            ft_putstr_fd("ra\n", all->fd);
            r_stack(a, tmp);
            free(tmp);
            tmp = NULL;
    }
    else if (w == 3 && size_list(*a) > 1)
    {
            ft_putstr_fd("rra\n", all->fd);
            rr_stack(a, tmp);
    }
    else
        switch_case_norm(a, b, w, all);
    }