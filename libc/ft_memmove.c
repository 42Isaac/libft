/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:51:32 by iperez            #+#    #+#             */
/*   Updated: 2018/11/28 14:42:45 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char *c)
{
	int i;

	i = 0;
	while (c[i])
		write(1, &c[i++], 1);
	write(1, "\n", 1);
}

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

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	ft_putchar(av[1]);
	ft_putchar(av[2]);
	write(1, "\n", 1);
	ft_memmove(av[1], av[2], atoi(av[3]));
	ft_putchar(av[1]);
	ft_putchar(av[2]);;
}
