/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 12:29:29 by rkergast          #+#    #+#             */
/*   Updated: 2018/09/09 17:28:00 by pacharbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>

int		ft_check_input_grid(char **grid);
int		ft_check_input(int argc, char **argv);
void	ft_check_finish(int lin, int *check);
int		ft_compare_res(char **argv, char **copy);
int		ft_check_17(int argc, char **argv);

int		ft_check_main(char **grid, int lin, int col, char value);
int		check_line(char *line, char value);
int		check_column(char **grid, int col, char value);
int		check_square(char **grid, int lin, int col, char value);
void	ft_check_multiple(char **argc, char **copy);

void	ft_rec(char **grid, int lin, int col, int *check);
void	ft_rec_rev(char **grid, int lin, int col, int *check);
void	ft_rec_i(char **grid, int lin, int col, int *check);
void	ft_rec_r_i(char **grid, int lin, int col, int *check);
int		next_lin(int lin, int col);
int		next_col(int col);
int		pre_lin(int lin, int col);
int		pre_col(int col);

void	ft_putstr(char *str);
void	ft_putchar(char c);
char	*ft_strcpy(char *dst, char *src);
void	ft_free_tab(char **grid);
char	**ft_tabdup(char **tab);

void	ft_display(char **grid);

#endif
