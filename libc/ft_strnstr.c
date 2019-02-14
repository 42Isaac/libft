/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 07:03:15 by iperez            #+#    #+#             */
/*   Updated: 2018/12/10 14:02:18 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		search;
	const char	*push;

	i = 0;
	if (!*haystack && !*needle)
		return((char *)haystack);
	while (haystack[i] && i < len)
	{
		search = 0;
		while (haystack[i] == needle[search] && haystack[i] && i < len)
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