/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 21:35:48 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/11 12:40:54 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;
	int l;

	i = 0;
	l = 0;
	if (str[i] == 0)
		return (1);
	while (str[l])
		l++;
	while (str[i] >= 'a' && str[i] <= 'z')
	{
		if (str[i] == str[l - 1])
			return (1);
		i++;
	}
	return (0);
}
