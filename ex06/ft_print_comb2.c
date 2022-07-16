/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:09:17 by yli               #+#    #+#             */
/*   Updated: 2022/06/28 17:07:52 by yli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_write_comb2(int a, int b)
{
	ft_putchar(a / 10);
	ft_putchar(a % 10);
	ft_putchar(b / 10);
	ft_putchar(b % 10);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			c = a / 10 + 48;
			ft_putchar(c);
			c = a % 10 + '0';
			ft_putchar(c);
			write (1, " ", 1);
			c = b / 10 + '0';
			ft_putchar(c);
			c = b % 10 + '0';
			ft_putchar(c);
			b++;
			if (a != 98)
				write (1, ", ", 2);
		}
		a++;
	}
}
