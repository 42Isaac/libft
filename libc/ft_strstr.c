/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 06:19:36 by iperez            #+#    #+#             */
/*   Updated: 2018/12/06 07:03:03 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int			i;
	int 		search;
	const char	*push;

	i = 0;
	while (haystack[i])
	{
		search = 0;
		while (haystack[i] == needle[search] && haystack[i])
		{
			i++;
			search++;
		}
		if (!needle[search])
		{
			push = &haystack[i - search];
			return ((char *)push);
		}
		i++;
	}
	return (NULL);
}