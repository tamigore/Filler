/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 12:45:22 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/11 10:57:39 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_tri_a_bulle(int size, char **str)
{
	int		i;
	char	*c;

	i = 1;
	while (i < size - 1)
	{
		if (ft_strcmp(str[i], str[i + 1]) > 0)
		{
			c = str[i + 1];
			str[i + 1] = str[i];
			str[i] = c;
			i = 0;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	ft_tri_a_bulle(argc, argv);
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
