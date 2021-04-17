/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:37:50 by zdnaya            #+#    #+#             */
/*   Updated: 2021/04/17 04:44:38 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_all *all;
    int i;

    i = 0;
    // main :     setrlimit(RLIMIT_AS, &rl);
    if (ac < 2)
        exit(1);
    else
    {
        all = initial(ac, all);
        // if (!ft_strcmp(av[1], "-c"))
        //     swap_c(all, ac, av);
        // else if (!ft_strcmp(av[1], "-sh"))
        //     swap_sh(all, ac, av);
        // else
            swap_(all, ac, av);
        free(all->a);
        all->a = NULL;
        // free(all->b);
        // all->b = NULL;
        free(all);
        all = NULL;
    }
}