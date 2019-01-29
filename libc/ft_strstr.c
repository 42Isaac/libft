/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 06:19:36 by iperez            #+#    #+#             */
/*   Updated: 2018/12/06 07:03:03 by iperez           ###   ########.fr       */
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

char	*ft_strstr(const char *haystack, const char *needle)
{
	int			i;
	int 		search;
	const char	*push;

	i = 0;
	while (haystack[i])
	{
		search = 0;
		while (haystack[i] == needle[search] && haystack[i])
		{
			i++;
			search++;
		}
		if (!needle[search])
		{
			push = &haystack[i - search];
			return ((char *)push);
		}
		i++;
	}
	return (NULL);
}

int		main(int ac, char **av)
{
	char	*test;
	
	if (ac != 3)
		return (0);
	test = ft_strstr(av[1], av[2]);
	ft_putstr(test);
	return (0);
}
