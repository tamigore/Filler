/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 12:11:45 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/17 16:20:16 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *tab_int;
	int i;

	i = 0;
	if (min >= max)
		return (tab_int = 0);
	if (!(tab_int = (int *)malloc(sizeof(int) * (max - min + 1))))
		return (0);
	while (min < max)
	{
		tab_int[i] = min;
		min++;
		i++;
	}
	tab_int[i] = '\0';
	return (tab_int);
}
/*
**int main()
**{
**	ft_range(-5, 5);
**	return(0);
**}
*/
