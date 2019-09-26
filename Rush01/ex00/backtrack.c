/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 12:28:37 by rkergast          #+#    #+#             */
/*   Updated: 2018/09/09 14:51:09 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_rec(char **grid, int lin, int col, int *check)
{
	char value;

	value = '1';
	ft_check_finish(lin, check);
	if (lin < 10 && !*check)
	{
		if (grid[lin][col] == '.')
		{
			while (value <= '9' && !*check)
			{
				if (ft_check_main(grid, lin, col, value))
				{
					grid[lin][col] = value;
					if (lin == 9 && col == 8)
						*check = 1;
					ft_rec(grid, next_lin(lin, col), next_col(col), check);
				}
				value++;
			}
			if (!*check)
				grid[lin][col] = '.';
		}
		else
			ft_rec(grid, next_lin(lin, col), next_col(col), check);
	}
}

void	ft_rec_rev(char **grid, int lin, int col, int *check)
{
	char value;

	value = '9';
	ft_check_finish(lin, check);
	if (lin < 10 && !*check)
	{
		if (grid[lin][col] == '.')
		{
			while (value >= '1' && !*check)
			{
				if (ft_check_main(grid, lin, col, value))
				{
					grid[lin][col] = value;
					if (lin == 9 && col == 8)
						*check = 1;
					ft_rec(grid, next_lin(lin, col), next_col(col), check);
				}
				value--;
			}
			if (!*check)
				grid[lin][col] = '.';
		}
		else
			ft_rec(grid, next_lin(lin, col), next_col(col), check);
	}
}

int		next_lin(int lin, int col)
{
	if (col == 8)
		lin++;
	return (lin);
}

int		next_col(int col)
{
	if (col < 8)
		col++;
	else
		col = 0;
	return (col);
}
