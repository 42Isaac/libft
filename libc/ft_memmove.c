/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:51:32 by iperez            #+#    #+#             */
/*   Updated: 2019/01/30 14:11:11 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		t[len];
	size_t				i;

	d = dst;
	s = src;
	i = 0;
	while (i < len)
	{
		t[i] = s[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		d[i] = t[i];
		i++;
	}
	dst = d;
	return (dst);
}
