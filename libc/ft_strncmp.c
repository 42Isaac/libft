/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 07:53:54 by iperez            #+#    #+#             */
/*   Updated: 2018/12/06 08:39:38 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int i)
{
	if (i < 0)
	{
		ft_putchar('-');
		i *= -1;
	}
	if (i > 9)
		ft_putint(i / 10);
	ft_putchar(i % 10 + '0');
}

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		push;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < n - 1)
		i++;
	push = s1[i] - s2[i];
	return (push);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	ft_putint(ft_strncmp(av[1], av[2], atoi(av[3])));
	ft_putchar('\n');
	return (0);
}
