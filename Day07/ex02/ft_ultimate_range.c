/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:53:24 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/17 17:04:08 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	if (!(tab = (int *)malloc(sizeof(*tab) * (max - min + 1))))
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	tab[i] = '\0';
	range[0] = tab;
	return (i);
}
/*
**int main()
**{
**	int **range;
**	int i;
**
**	i = 0;
**	printf("%d\n", ft_ultimate_range(range, 3, 9));
**	while (range[0][i])
**	{
**		printf("%d", range[0][i]);
**		i++;
**	}
**	return (0);
**}
*/
