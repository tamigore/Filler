/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 12:28:01 by rkergast          #+#    #+#             */
/*   Updated: 2018/09/09 18:27:13 by pacharbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		ft_check_input_grid(char **grid)
{
	int		lin;
	int		col;
	char	value;

	lin = 1;
	while (grid[lin])
	{
		col = 0;
		while (grid[lin][col])
		{
			value = grid[lin][col];
			grid[lin][col] = '.';
			if (grid[lin][col] != '.' && !ft_check_main(grid, lin, col, value))
				return (0);
			grid[lin][col] = value;
			col++;
		}
		lin++;
	}
	return (1);
}

int		ft_check_input(int argc, char **argv)
{
	int lin;
	int col;

	lin = 1;
	if (!ft_check_17(argc, argv))
		return (0);
	if (argc != 10)
		return (0);
	while (lin < argc)
	{
		col = 0;
		while (argv[lin][col])
		{
			if ((argv[lin][col] < '1' || argv[lin][col] > '9') &&
				argv[lin][col] != '.')
				return (0);
			col++;
		}
		if (col != 9)
			return (0);
		lin++;
	}
	if (!ft_check_input_grid(argv))
		return (0);
	return (1);
}

void	ft_check_finish(int lin, int *check)
{
	if (lin == 10 && !*check)
		*check = 1;
}

int		ft_compare_res(char **argv, char **copy)
{
	int lin;
	int col;

	lin = 1;
	while (argv[lin])
	{
		col = 0;
		while (argv[lin][col])
		{
			if (argv[lin][col] != copy[lin][col])
				return (0);
			col++;
		}
		lin++;
	}
	return (1);
}

int		ft_check_17(int argc, char **argv)
{
	int lin;
	int col;
	int	i;

	lin = 1;
	i = 0;
	while (lin < argc)
	{
		col = 0;
		while (argv[lin][col])
		{
			if (argv[lin][col] == '.')
				i++;
			col++;
		}
		if (i > 64)
			return (0);
		lin++;
	}
	return (1);
}
