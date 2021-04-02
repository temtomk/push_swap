/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:59:35 by zdnaya            #+#    #+#             */
/*   Updated: 2021/04/02 16:04:38 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check_replicat(char **av)
{
    int i;
    int j;
    char *replica;

    i = 0;
    j = 0;
    while (av[i])
    {
        replica = ft_strdup(av[i]);
        j = 0;
        while (av[j])
        {
            if (j == i)
                j++;
            else if (ft_strcmp(replica, av[j]) == 0)
            {
                ft_putstr_fd("Error: Imposter!", 0);
                free_arg(&replica);
                exit(1);
            }
            else
                j++;
        }
        free_arg(&replica);
        i++;
    }
}

void first_errors(int ac, char **av)
{
    if (ac < 2)
        ft_putstr_fd("Error: Add agruments", 0);
    if (ac == 2)
    {
        ft_putstr_fd("Error: There is one element:", 0);
        write(1, "\n", 1);
        write(1, av[1], 1);
    }
    else
        check_replicat(av);
}