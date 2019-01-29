/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 12:20:36 by iperez            #+#    #+#             */
/*   Updated: 2018/11/29 12:54:05 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *c)
{
	int i;

	i = 0;
	while (c[i])
		write(1, &c[i++], 1);
	write(1, "\n", 1);
}

char	*ft_strdup(const char *s1)
{
	char	*r;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	r = (char *)malloc(sizeof(r) * i + 1);
	if (r == NULL)
		return (NULL);
	r[i + 1] = '\0';
	while (i >= 0)
	{
		r[i] = s1[i];
		i--;
	}
	return (r);
}

int		main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	ft_putstr(ft_strdup(av[1]));
	return (0);
}
