/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 05:11:48 by iperez            #+#    #+#             */
/*   Updated: 2019/01/30 14:16:22 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while (dst[d])
		d++;
	if (dstsize > d + 1)
		abort();
	if (dstsize < d)
		d = dstsize;
	while (src[s])
		s++;
	return (d + s);
}