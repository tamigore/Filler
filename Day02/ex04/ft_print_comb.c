/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 09:57:33 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/01 17:05:21 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_relay(char c, char d, char u)
{
	while ((c <= '7') && (d <= '8') && (u <= '9'))
	{
		ft_putchar(c);
		ft_putchar(d);
		ft_putchar(u);
		if (c == '7')
			break ;
		else if (d == '8')
		{
			c++;
			d = c + 1;
			u = d + 1;
		}
		else if (u == '9')
		{
			d++;
			u = d + 1;
		}
		else
			u++;
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	ft_relay('0', '1', '2');
}
