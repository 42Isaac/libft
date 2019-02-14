/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 19:03:42 by iperez            #+#    #+#             */
/*   Updated: 2019/02/13 19:03:45 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    **ft_strsplit(char const *s, char c)
{
    int     arr;
    int     str;
    int     arrstr;
    char    **push;

    if (!s[0] || ft_wordcount((char *)s, c) == 0 || !(push = 
    (char **)malloc(sizeof(char **) * ft_wordcount((char *)s, c) + 1)))
        return (NULL);
    push[ft_wordcount((char *)s, c)] = 0;
    str = 0;
    arr = 0;
    while ((size_t)arr < ft_wordcount((char *)s, c))
    {
        while (s[str] && s[str] == c)
            str++;
        if(!(push[arr] = ft_strnew(ft_wordlen((char *)s, c, str))))
        {
            while(arr >= 0)
                free(push[arr--]);
            free(push);
            return (NULL);
        }
        arrstr = 0;
        while(s[str] && s[str] != c)
            push[arr][arrstr++] = s[str++];
        arr++;
    }
    return (push);
}