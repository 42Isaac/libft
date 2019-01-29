/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 12:54:35 by iperez            #+#    #+#             */
/*   Updated: 2018/12/06 03:38:21 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putstr(char *c)
{
	int i;

	i = 0;
	while (c[i])
		write(1, &c[i++], 1);
	write(1, "\n", 1);
}

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int		main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	ft_putstr(av[2]);
	av[2] = strcpy(av[2], av[1]);
	ft_putstr(av[2]);
	return (0);
}
