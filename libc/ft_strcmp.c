/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 07:14:25 by iperez            #+#    #+#             */
/*   Updated: 2018/12/06 08:34:56 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

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

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int push;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	push = s1[i] - s2[i];
	return (push);
}

int		main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	ft_putint(ft_strcmp(av[1], av[2]));
	ft_putchar('\n');
	return (0);
}
