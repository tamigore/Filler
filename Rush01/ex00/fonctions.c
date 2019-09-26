/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 12:27:28 by rkergast          #+#    #+#             */
/*   Updated: 2018/09/09 14:26:59 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strcpy(char *dst, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_tabdup(char **tab)
{
	char	**copy;
	int		i;

	copy = (char **)malloc(sizeof(char*) * 11);
	if (copy)
	{
		i = 0;
		while (i < 10)
		{
			copy[i] = (char*)malloc(sizeof(char) * 10);
			if (copy[i])
				copy[i] = ft_strcpy(copy[i], tab[i]);
			i++;
		}
		copy[i] = 0;
	}
	return (copy);
}

void	ft_free_tab(char **tab)
{
	int i;

	i = 0;
	while (tab && tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
