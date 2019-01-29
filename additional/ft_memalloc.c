/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 05:39:42 by iperez            #+#    #+#             */
/*   Updated: 2019/01/07 11:50:35 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		ft_strlen(char *c)
{
	int i;

	while (c[i])
		i++;
	return (i);
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*r;

	r = b;
	while (len > 0)
		r[--len] = c;
	return (b);
}

void	*ft_memalloc(size_t size)
{
	void *push;

	push = (void *)malloc(sizeof(void) * size);
	if (!push)
		return (NULL);
	return (push);
}

int		main(int ac, char **av)
{
	char	*test;
	int		sl;

	if (ac != 2)
		return (0);
	test = ft_memalloc(atoi(av[1]));
	sl = ft_strlen(test);
	if (sl == atoi(av[1]))
	{
		write(1, "PASS\n", 5);
		return (0);
	}
	write(1, "FAIL\n", 5);
	return (0);
}
