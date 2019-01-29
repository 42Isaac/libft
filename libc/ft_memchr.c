/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 08:55:58 by iperez            #+#    #+#             */
/*   Updated: 2018/12/06 08:56:02 by iperez           ###   ########.fr       */
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

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*src;
	const void	*r;
	size_t		i;

	i = 0;
	src = s;
	while (i < n && src[i] != c)
		i++;
	if (src[i] == c)
	{
		r = &src[i];
		return ((void *)r);
	}
	return (NULL);
}

int		main(int ac, char **av)
{
	char *str;

	if (ac != 4)
		return (0);
	str = ft_memchr(av[1], av[2][0], atoi(av[3]));
	ft_putchar(str);
	return (0);
}
