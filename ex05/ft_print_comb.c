/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:01:49 by yli               #+#    #+#             */
/*   Updated: 2022/06/28 20:52:13 by yli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	m;
	char	n;

	i = '0';
	while (i <= '7')
	{
		m = i + 1;
		while (m <= '8')
		{
			n = m + 1;
			while (n <= '9')
			{
				ft_putchar(i);
				ft_putchar(m);
				ft_putchar(n);
				if (i != '7')
					write (1, ", ", 2);
				n++;
			}
			m++;
		}
		i++;
	}
}
