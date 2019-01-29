/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:16:47 by iperez            #+#    #+#             */
/*   Updated: 2019/01/10 12:18:24 by iperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putendl(char const *s)
{
	int i;

	while (s[i])
		write(1, &s[i++], 1);
	write(1, "\n", 1);
}
