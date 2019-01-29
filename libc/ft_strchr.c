/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 05:48:36 by iperez            #+#    #+#             */
/*   Updated: 2018/12/06 06:13:52 by iperez           ###   ########.fr       */
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
	if (c == NULL)
	{
		write(1, "NULL\n", 5);
		exit (0);
	}
	while (c[i])
		ft_putchar(c[i++]);
	ft_putchar('\n');
}

char	*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*push;

	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] != (char)c)
		return (NULL);
	push = &s[i];
	return ((char *)push);
}

int		main(int ac, char **av)
{
	char	*test;
	
	if (ac != 3)
		return (0);
	test = ft_strchr(av[1], av[2][0]);
	ft_putstr(test);
	return (0);
}
