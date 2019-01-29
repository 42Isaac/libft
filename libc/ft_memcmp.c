/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:27:01 by iperez            #+#    #+#             */
/*   Updated: 2018/11/28 16:18:20 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	int i;

	i = 0;
	while (c[i])
		ft_putchar(c[i]);
	ft_putchar('\n');
}

void	ft_putnum(int i)
{
	if (i < 0)
	{
		ft_putchar('-');
		i *= -1;
	}
	if (i > 9)
		ft_putnum(i / 10);
	ft_putchar(i % 10 + '0');
}

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	size_t 		i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (str1[i] == str2[i] && i < n)
		i++;
	return (str1[i] - str2[i]);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	ft_putnum(ft_memcmp(av[1], av[2], atoi(av[3])));
	ft_putchar('\n');
	return (0);
}
