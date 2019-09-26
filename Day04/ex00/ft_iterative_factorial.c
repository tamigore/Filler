/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 22:01:42 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/08 15:18:57 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int n;

	n = 1;
	if (nb > 12 || nb < 0)
	{
		return (0);
	}
	if (nb == 0)
		return (1);
	else
	{
		while (0 < nb)
		{
			n = n * nb;
			nb--;
		}
		return (n);
	}
}