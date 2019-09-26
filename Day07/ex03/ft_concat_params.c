/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:14:01 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/18 14:04:51 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char **tab)
{
	int len;
	int i;
	int j;

	i = 1;
	j = 0;
	len = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
			j++;
		len += j;
		i++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		n;
	char	*str;

	i = 1;
	n = ft_strlen(argv);
	if (!(str = (char *)malloc(sizeof(char) * n)))
		return (0);
	n = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			str[n++] = argv[i][j];
			j++;
		}
		if (i != argc - 1)
			str[n] = '\n';
		n++;
		i++;
	}
	str[n - 1] = '\0';
	return (str);
}
/*
**int main(int argc, char **argv)
**{
**	printf("%s", ft_concat_params(argc, argv));
**	return (0);
**}
*/
