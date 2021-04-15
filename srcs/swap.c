/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:37:50 by zdnaya            #+#    #+#             */
/*   Updated: 2021/04/15 16:37:59 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_all *all;
    int i;

    i = 0;
    if (ac < 2)
        exit(1);
    else
    {
        all = initial(ac, all);
        if (!ft_strcmp(av[1], "-c"))
        {
            if (ac == 3)
                all->split = ft_split(av[2], ' ');
            else
                all->split = &av[2];
            check_replicat(all->split);
            check_ascii(all->split);
            // all->a = put_in_list(all, all->split);
            // all->len = size_list(all->a);
            // if (all->len <= 10)
            //     sort_min_sh(&(all->a), &(all->b), all->len);
            // else if (all->len > 10 && all->len < 200)
            //     algo_1_sh(&(all->a), &(all->b), all->len);
            // else
            //     algo_(&(all->a), &(all->b), all->len);
        }
        if (!ft_strcmp(av[1], "-sh"))
        {
            if (ac == 3)
                all->split = ft_split(av[2], ' ');
            else
                all->split = &av[2];
            check_replicat(all->split);
            check_ascii(all->split);
            all->a = put_in_list(all, all->split);
            all->len = size_list(all->a);
            if (all->len <= 10)
                sort_min(&(all->a), &(all->b), all->len);
            else if (all->len > 10 && all->len < 200)
                algo_1(&(all->a), &(all->b), all->len);
            else
                algo(&(all->a), &(all->b), all->len);
        }
        else
        {
            if (ac == 2)
                all->split = ft_split(av[1], ' ');
            else
                all->split = &av[1];

            check_replicat(all->split);
            check_ascii(all->split);
            put_in_list(all, all->split);
            // if (ac == 2)
            // {
            //     while (all->split[i])
            //     {
            //         free_arg(&all->split[i]);
            //         all->split[i] = NULL;
            //         i++;
            //     }
            //     free_arg(all->split);
            //     all->split = NULL;
            // }
            all->len = size_list(all->a);
            if (all->len <= 10)
                sort_min(&(all->a), &(all->b), all->len);
            else if (all->len > 10 && all->len < 200)
                algo_1(&(all->a), &(all->b), all->len);
            else
                algo(&(all->a), &(all->b), all->len);
        }
        free_stack(&all->a);
        free_stack(&all->b);
        free(all);
        all = NULL;
    }
}