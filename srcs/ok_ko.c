/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok_ko.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 18:45:25 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/04/17 21:31:52 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_sort(t_stack **a, int len)
{
    t_stack *tmp;
    int i;

    i = 0;

    if (size_list(*a) != len)
        return (0);
    tmp = (*a);
    while (tmp && tmp->next)
    {
        if ((tmp)->next != NULL && ((tmp)->number < (tmp)->next->number))
            (tmp) = (tmp)->next;
        else
            return (0);
    }
  return (1);
}
char	*ft_strdup(const char *src)
{
	char			*dup;
	int				i;

	i = 0;
	while (src[i])
		i++;
	dup = (char *)malloc(sizeof(char) * i + 1);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

void	*ft_calloc(size_t count, size_t size)
{
	int				i;
	char			*ptr;

	i = 0;
	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	i = (size * count) - 1;
	while (i >= 0)
	{
		ptr[i] = '\0';
		i--;
	}
	return (ptr);
}
int ft_strlen(char *s1)
{
    int k;

    k = 0;
    while (s1[k])
        k++;
    return (k);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *s3;
    char *str1;
    char *str2;
    unsigned int len;

    if (!s1 || !s2)
    {
        return (NULL);
    }
    str1 = (char *)s1;
    str2 = (char *)s2;
    len = 0;
    s3 = (char *)malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
    if (s3 == NULL)
        return (NULL);
    while (*str1)
        s3[len++] = *(str1++);
    while (*str2)
        s3[len++] = *(str2++);
    s3[len] = '\0';
    return (s3);
}