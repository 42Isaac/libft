/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 08:55:58 by iperez            #+#    #+#             */
/*   Updated: 2019/01/30 14:06:18 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*src;
	const void	*r;
	size_t		i;

	i = 0;
	src = s;
	while (i < n && src[i] != c)
		i++;
	if (src[i] == c)
	{
		r = &src[i];
		return ((void *)r);
	}
	return (NULL);
}
