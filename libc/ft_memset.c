/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 13:12:10 by iperez            #+#    #+#             */
/*   Updated: 2018/12/06 08:59:01 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void	ft_putstr(char *c)
{
	int i;

	i = 0;
	while (c[i])
		write(1, &c[i++], 1);
	write(1, "\n", 1);
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*r;

	r = b;
	while (len > 0)
		r[--len] = c;
	return (b);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	ft_putstr("My Function:");
	ft_memset(av[1], av[2][0], atoi(av[3]));
	ft_putstr(av[1]);
	ft_putstr("string.h Function:");
	memset(av[1], av[2][0], atoi(av[3]));
	ft_putstr(av[1]);
	return (0);
}
