/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 12:56:43 by iperez            #+#    #+#             */
/*   Updated: 2018/12/06 03:43:46 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void	ft_putchar(char *c)
{
	int i;

	i = 0;
	while (c[i])
		write(1, &c[i++], 1);
	write(1, "\n", 1);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	while (n > 0)
	{
		--n;
		d[n] = s[n];
	}
	return (d);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	ft_putchar(av[1]);
	ft_putchar(av[2]);
	write(1, "\n", 1);
	ft_memcpy(av[1], av[2], atoi(av[3]));
	ft_putchar(av[1]);
	ft_putchar(av[2]);;
}
