/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 12:20:36 by iperez            #+#    #+#             */
/*   Updated: 2019/01/30 14:14:05 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*r;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	r = (char *)malloc(sizeof(r) * i + 1);
	if (r == NULL)
		return (NULL);
	r[i + 1] = '\0';
	while (i >= 0)
	{
		r[i] = s1[i];
		i--;
	}
	return (r);
}
