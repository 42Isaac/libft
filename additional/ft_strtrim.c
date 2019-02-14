/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 14:29:51 by iperez            #+#    #+#             */
/*   Updated: 2019/02/13 14:29:57 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s)
{
    int start;
    int end;
    int i;
    char *push;

    start = 0;
    end = ft_strlen(s) - 1;
    while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
        start++;
    while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
        end--;
    if (!(push = ft_strnew(end - start)))
        return (NULL);
    i = 0;
    while (start <= end)
        push[i++] = s[start++];
    return (push);
}