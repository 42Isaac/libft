/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 14:16:45 by iperez            #+#    #+#             */
/*   Updated: 2019/01/30 14:12:19 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int s1l;
	int s2l;
	int s1truel;

	s1l = 0;
	s2l = 0;
	s1truel = *(&s1 + 1) - s1 - 8;
	while (s1[s1l])
		s1l++;
	while (s2[s2l])
		s2l++;
	if (s1truel <= s1l + s2l)
		abort();
	s2l = 0;
	while (s2[s2l])
		s1[s1l++] = s2[s2l++];
	s1[s1l] = '\0';
	return (s1);
}
