/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 20:04:13 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/18 14:01:19 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int x;
	int y;

	x = 0;
	while (tab[x])
	{
		y = 0;
		while (tab[x][y])
		{
			ft_putchar(tab[x][y]);
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
/*
**int main(int argc, char **argv)
**{
**	int i;
**
**	i = 0;
**	if (argc == 3)
**		ft_print_words_tables(ft_split(argv[1], argv[2]));
**	return (0);
**}
*/
