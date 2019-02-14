/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:26:06 by iperez            #+#    #+#             */
/*   Updated: 2019/02/13 18:26:10 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_wordlen(char *s, char end, int start)
{
    size_t  len;

    len = 0;
    while (s[start] && s[start] != end)
    {
        len++;
        start++;
    }
    return (len);
}