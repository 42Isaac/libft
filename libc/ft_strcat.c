/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 14:16:45 by iperez            #+#    #+#             */
/*   Updated: 2018/12/06 03:48:39 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	ft_putstr(char *c)
{
	int i;

	i = 0;
	while (c[i])
		ft_putchar(c[i++]);
	ft_putchar('\n');
}

char	*ft_strcat(char *s1, const char *s2)
{
	int s1l;
	int s2l;
	int s1truel;

	s1l = 0;
	s2l = 0;
	s1truel = *(&s1 + 1) - s1 - 8;
	while (s1[s1l])
		s1l++;
	while (s2[s2l])
		s2l++;
	if (s1truel <= s1l + s2l)
		abort();
	s2l = 0;
	while (s2[s2l])
		s1[s1l++] = s2[s2l++];
	s1[s1l] = '\0';
	return (s1);
}

int		main(int ac, char **av)
{
	char	c[10];

	c[0] = '1';
	c[1] = '\0';
	if (ac != 3)
		return (0);
	ft_strcat(c, av[2]);
	ft_putstr(c);
	return (0);
}
