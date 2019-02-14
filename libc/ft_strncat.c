/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 03:44:23 by iperez            #+#    #+#             */
/*   Updated: 2019/01/30 14:19:01 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t l)
{
	size_t	s1l;
	size_t	s2l;
	size_t	s1truel;

	s1l = 0;
	s2l = 0;
	s1truel = *(&s1 + 1) - s1 - 8;
	while (s1[s1l])
		s1l++;
	while (s2[s2l])
		s2l++;
	if (l > s1truel && s1truel <= s1l + s2l)
		abort();
	s2l = 0;
	while (s2[s2l] && s2l < l)
		s1[s1l++] = s2[s2l++];
	s1[s1l] = '\0';
	return (s1);
}
