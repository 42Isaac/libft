/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:31:09 by iperez            #+#    #+#             */
/*   Updated: 2019/01/30 14:05:50 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t 				i;

	i = 0;
	d = dst;
	s = src;
	while (i < n && s[i - 1] != c)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}