/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:17:47 by iperez            #+#    #+#             */
/*   Updated: 2019/02/21 08:23:12 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (1);
	while (s1[i] == s2[i] && i < n)
	{
		if (!s1[i])
			return (1);
		i++;
	}
	if (i == n)
		i--;
	if (i == 0)
		return (0);
	if (s1[i] == s2[i])
		return (1);
	return (0);
}
