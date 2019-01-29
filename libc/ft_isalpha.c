/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 07:43:27 by iperez            #+#    #+#             */
/*   Updated: 2018/12/06 07:52:21 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>

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

int		ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int		main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	ft_putint(ft_isalpha(av[1][0]));
	ft_putchar('\n');
	return(0);
}
