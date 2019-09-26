/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 12:30:02 by rkergast          #+#    #+#             */
/*   Updated: 2018/09/09 18:20:37 by pacharbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		check_line(char *line, char value)
{
	int		col;

	col = 0;
	while (line[col])
	{
		if (line[col] == value)
			return (0);
		col++;
	}
	return (1);
}

int		check_column(char **grid, int col, char value)
{
	int		lin;

	lin = 1;
	while (lin <= 9)
	{
		if (grid[lin][col] == value)
			return (0);
		lin++;
	}
	return (1);
}

int		check_square(char **grid, int lin, int col, char value)
{
	int		i;
	int		j;

	i = 1;
	lin -= 1;
	lin -= lin % 3;
	col -= col % 3;
	while (i < 4)
	{
		j = 0;
		while (j < 3)
		{
			if (value == grid[lin + i][col + j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_check_main(char **grid, int lin, int col, char value)
{
	if (!check_line(grid[lin], value)
			|| !check_column(grid, col, value)
			|| !check_square(grid, lin, col, value))
		return (0);
	else
		return (1);
}

void	ft_check_multiple(char **argv, char **copy)
{
	int		check;
	char	**copy2;
	char	**copy3;

	check = 0;
	copy2 = ft_tabdup(argv);
	copy3 = ft_tabdup(argv);
	ft_rec_rev(copy, 1, 0, &check);
	check = 0;
	ft_rec_i(copy2, 9, 8, &check);
	check = 0;
	ft_rec_r_i(copy3, 9, 8, &check);
	if (ft_compare_res(argv, copy) && ft_compare_res(argv, copy2)
			&& ft_compare_res(argv, copy3))
		ft_display(argv);
	else
		ft_putstr("Error\n");
}
