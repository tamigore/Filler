/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack_rev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacharbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 16:35:57 by pacharbo          #+#    #+#             */
/*   Updated: 2018/09/09 17:11:48 by pacharbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_rec_i(char **grid, int lin, int col, int *check)
{
	char value;

	value = '1';
	ft_check_finish(lin, check);
	if (lin > 0 && !*check)
	{
		if (grid[lin][col] == '.')
		{
			while (value <= '9' && !*check)
			{
				if (ft_check_main(grid, lin, col, value))
				{
					grid[lin][col] = value;
					if (lin == 1 && col == 0)
						*check = 1;
					ft_rec_i(grid, pre_lin(lin, col), pre_col(col), check);
				}
				value++;
			}
			if (!*check)
				grid[lin][col] = '.';
		}
		else
			ft_rec_i(grid, pre_lin(lin, col), pre_col(col), check);
	}
}

void	ft_rec_r_i(char **grid, int lin, int col, int *check)
{
	char value;

	value = '9';
	ft_check_finish(lin, check);
	if (lin > 0 && !*check)
	{
		if (grid[lin][col] == '.')
		{
			while (value >= '1' && !*check)
			{
				if (ft_check_main(grid, lin, col, value))
				{
					grid[lin][col] = value;
					if (lin == 1 && col == 0)
						*check = 1;
					ft_rec_r_i(grid, pre_lin(lin, col), pre_col(col), check);
				}
				value--;
			}
			if (!*check)
				grid[lin][col] = '.';
		}
		else
			ft_rec_r_i(grid, pre_lin(lin, col), pre_col(col), check);
	}
}

int		pre_lin(int lin, int col)
{
	if (col == 0)
		lin--;
	return (lin);
}

int		pre_col(int col)
{
	if (col > 0)
		col--;
	else
		col = 8;
	return (col);
}
