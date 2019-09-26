/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 12:33:51 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/18 13:40:56 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_search(char *charset, char c)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c || charset[i] == '\0')
			return (1);
		i++;
	}
	return (0);
}

int		ft_count_words(char *str, char *charset)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (ft_search(charset, str[i]) == 0)
		{
			len++;
			while (ft_search(charset, str[i]) == 0)
				i++;
		}
		else
			i++;
	}
	return (len);
}

int		ft_size_tab(int *x, char *str, char *charset)
{
	int i;
	int nb;

	i = *x;
	nb = 0;
	while (ft_search(charset, str[i]) == 1)
		i++;
	if (ft_search(charset, str[i]) == 0)
	{
		while (ft_search(charset, str[i]) == 0)
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

char	**ft_fill_tab(char **tab, char *str, int len, char *charset)
{
	int x;
	int y;
	int n;

	x = 0;
	n = 0;
	while (x < len)
	{
		while (ft_search(charset, str[n]) == 1)
			n++;
		if (ft_search(charset, str[n]) == 0)
		{
			y = 0;
			while (ft_search(charset, str[n]) == 0)
				tab[x][y++] = str[n++];
		}
		tab[x][y] = '\0';
		x++;
		n++;
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		len;
	int		i;
	int		nb;
	int		index;

	i = 0;
	len = 0;
	index = 0;
	len = ft_count_words(str, charset);
	if (!(tab = (char **)malloc(sizeof(char *) * (len + 1))))
		return (0);
	while (i < len)
	{
		nb = ft_size_tab(&index, str, charset);
		if (!(tab[i] = (char *)malloc(sizeof(char) * (nb + 1))))
			return (0);
		i++;
	}
	tab = ft_fill_tab(tab, str, len, charset);
	tab[len] = 0;
	return (tab);
}
