/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 11:53:00 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/05 21:26:57 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int n;

	n = 3;
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (nb % n != 0)
		n++;
	if (n != nb)
		return (ft_find_next_prime(nb + 1));
	return (nb);
}
