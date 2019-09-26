/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 15:22:31 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/20 17:34:53 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tub;

	i = 0;
	if (!(tub = malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		tub[i] = f(tab[i]);
		i++;
	}
	return (tub);
}
