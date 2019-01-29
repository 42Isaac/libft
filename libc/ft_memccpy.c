/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:31:09 by iperez            #+#    #+#             */
/*   Updated: 2018/11/28 13:38:40 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	*ft_memccpy(void  dst, const void  src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t 				i;

	i = 0;
	d = dst;
	s = src;
	while (i < n && s[i - 1] != c)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

int		main(int ac, char **av)
{
	unsigned char c;

	if (ac != 5)
		return (0);
	c = av[3][0];
	ft_putchar(av[1]);
	ft_putchar(av[2]);
	write(1, "\n", 1);
	ft_memccpy(av[1], av[2], c, atoi(av[4]));
	ft_putchar(av[1]);
	ft_putchar(av[2]);;
}
