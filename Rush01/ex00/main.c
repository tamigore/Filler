/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 12:26:16 by rkergast          #+#    #+#             */
/*   Updated: 2018/09/09 17:14:16 by pacharbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_display(char **grid)
{
	int lin;
	int col;

	lin = 1;
	while (lin < 10)
	{
		col = 0;
		while (col < 9)
		{
			ft_putchar(grid[lin][col]);
			if (col < 8)
				ft_putchar(' ');
			col++;
		}
		lin++;
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		check;
	char	**copy;

	check = 0;
	if (!ft_check_input(argc, argv))
	{
		ft_putstr("Error\n");
		return (0);
	}
	copy = ft_tabdup(argv);
	ft_rec(argv, 1, 0, &check);
	if (check == 1)
	{
		ft_check_multiple(argv, copy);
	}
	else
		ft_putstr("Error\n");
	ft_free_tab(copy);
	return (0);
}
