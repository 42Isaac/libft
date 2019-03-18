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
	int		i;
	int		j;
	int		k;
	int		good;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	i = -1;
	good = 0;
	while (*(haystack + ++i) && !good)
	{
		if (*(haystack + i) == *(needle + 0))
		{
			j = 0;
			k = i;
			good = 1;
			while (*(needle + j))
				if (*(needle + j++) != *(haystack + k++))
					good = 0;
			if (good)
				return ((char *)haystack + i);
		}
	}
	return (NULL);
}
