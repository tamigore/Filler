/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 20:07:41 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/18 14:02:29 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SPACE(x) (str[x] == ' '||str[x] == '\n'||str[x] == '\t'||str[x] == '\0')
#define CHAR(x) ((x > 32 && x < 127) ? 1 : 0)
#include <stdlib.h>
#include <stdio.h>

int		ft_count_words(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (CHAR(str[i]) == 1)
		{
			len++;
			while (CHAR(str[i]) == 1 && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (len);
}

int		ft_size_tab(int *x, char *str)
{
	int i;
	int nb;

	i = *x;
	nb = 0;
	while (SPACE(i))
		i++;
	if (CHAR(str[i]) == 1)
	{
		while (CHAR(str[i]) == 1)
		{
			i++;
			nb++;
		}
		*x = i;
		return (nb);
	}
	i++;
	return (0);
}

char	**ft_fill_tab(char **tab, char *str, int len)
{
	int x;
	int y;
	int n;

	x = 0;
	n = 0;
	while (x < len)
	{
		while (SPACE(n))
			n++;
		if (CHAR(str[n]) == 1)
		{
			y = 0;
			while (CHAR(str[n]) == 1)
				tab[x][y++] = str[n++];
		}
		tab[x][y] = '\0';
		x++;
		n++;
	}
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		len;
	int		i;
	int		nb;
	int		index;

	i = 0;
	len = 0;
	index = 0;
	len = ft_count_words(str);
	if (!(tab = (char **)malloc(sizeof(char *) * (len + 1))))
		return (0);
	while (i < len)
	{
		nb = ft_size_tab(&index, str);
		if (!(tab[i] = (char *)malloc(sizeof(char) * (nb + 1))))
			return (0);
		i++;
	}
	tab = ft_fill_tab(tab, str, len);
	tab[len] = 0;
	return (tab);
}
