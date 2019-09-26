/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 18:33:01 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/02 21:45:06 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_put_int_to_char(int a, int b)
{
	ft_putchar(a / 10 + 48);
	ft_putchar(a % 10 + 48);
	ft_putchar(' ');
	ft_putchar(b / 10 + 48);
	ft_putchar(b % 10 + 48);
}

void	ft_relay(int a, int b)
{
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_put_int_to_char(a, b);
			if (a == 98)
				break ;
			ft_putchar(',');
			ft_putchar(' ');
			b++;
		}
		a++;
	}
}

void	ft_print_comb2(void)
{
	ft_relay(0, 0);
}
