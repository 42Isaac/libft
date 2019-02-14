/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:27:01 by iperez            #+#    #+#             */
/*   Updated: 2019/01/30 14:10:04 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	size_t 		i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (str1[i] == str2[i] && i < n)
		i++;
	return (str1[i] - str2[i]);
}
