/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 16:13:55 by iperez            #+#    #+#             */
/*   Updated: 2019/02/13 16:13:57 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_wordcount(char *s, char d)
{
    int     i;
    size_t  count;

    i = 0;
    count = 0;
    while (s[i])
    {
        while (s[i] == d)
            i++;
        if (s[i] && s[i] != d)
        {
            count++;
            while (s[i] && s[i] != d)
                i++;
        }
    }
    return (count);
}