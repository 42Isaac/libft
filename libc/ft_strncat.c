/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 03:44:23 by iperez            #+#    #+#             */
/*   Updated: 2018/12/06 03:57:40 by iperez           ###   ########.fr       */
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

char	*ft_strncat(char *s1, const char *s2, size_t l)
{
	size_t	s1l;
	size_t	s2l;
	size_t	s1truel;

	s1l = 0;
	s2l = 0;
	s1truel = *(&s1 + 1) - s1 - 8;
	while (s1[s1l])
		s1l++;
	while (s2[s2l])
		s2l++;
	if (l > s1truel && s1truel <= s1l + s2l)
		abort();
	s2l = 0;
	while (s2[s2l] && s2l < l)
		s1[s1l++] = s2[s2l++];
	s1[s1l] = '\0';
	return (s1);
}

int		main(int ac, char **av)
{
	char	c[10];

	c[0] = '1';
	c[1] = '\0';
	if (ac != 4)
		return (0);
	ft_strncat(c, av[2], atoi(av[3]));
	ft_putstr(c);
	return (0);
}
