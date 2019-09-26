/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 11:50:49 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/18 14:00:46 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_strrev(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	i--;
	while (i > j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i--;
		j++;
	}
}

int		ft_search_char(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (0);
}

char	ft_search_int(char *str, int nb)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i == nb)
			return (str[i]);
		i++;
	}
	return (0);
}

int		ft_conv_deci(char *str, char *base_from)
{
	int base_len;
	int power;
	int len;
	int nb;

	nb = 0;
	while (str[nb])
		nb++;
	len = nb - 1;
	nb = 0;
	while (base_from[nb])
		nb++;
	base_len = nb;
	power = 1;
	nb = 0;
	while (len >= 0)
	{
		nb += ft_search_char(base_from, str[len]) * power;
		power *= base_len;
		len--;
	}
	return (nb);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		i;
	char	*str;
	int		base_len;

	i = 0;
	while (base_to[i])
		i++;
	base_len = i;
	nb = ft_conv_deci(nbr, base_from);
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (nb + 1))))
		return (NULL);
	while (nb > 0)
	{
		str[i++] = ft_search_int(base_to, nb % base_len);
		nb /= base_len;
	}
	str[i] = '\0';
	ft_strrev(str);
	return (str);
}
/*
**int main()
**{
**	char *str;
**
**	str = (char *)malloc(100);
**	str = ft_convert_base("21", "123456789", "01");
**	printf("%s", str);
**	return(0);
**}
*/
