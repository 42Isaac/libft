/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:09:43 by iperez            #+#    #+#             */
/*   Updated: 2018/12/06 01:47:01 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <strings.h>

void	ft_putstr(char *c)
{
	int i;

	i = 0;
	while (c[i])
		write(1, &c[i++], 1);
	write(1, "\n", 1);
}

void	ft_putnullstr(char *c, int l)
{
	int	i;

	i = 0;
	while (!c[i] && i < l)
	{
		write(1, "~", 1);
		i++;
	}
	while (i < l)
		write(1, &c[i++], 1);
	write(1, "\n", 1);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n > 0)
		str[--n] = 0;
}

int		main(int ac, char **av)
{
	int l;

	if (ac != 3)
		return (0);
	l = 0;
	while (av[1][l])
		l++;
	ft_putstr("My Function:");
	ft_bzero(av[1], atoi(av[2]));
	ft_putnullstr(av[1], l);
	ft_putstr("string.h Function:");
	bzero(av[1], atoi(av[2]));
	ft_putnullstr(av[1], l);
	return (0);
}
