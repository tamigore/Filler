/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 13:20:03 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/04 14:42:25 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	swit;
	int		len;
	int		n;

	n = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	len--;
	while (n <= len)
	{
		swit = str[n];
		str[n] = str[len];
		str[len] = swit;
		n++;
		len--;
	}
	return (str);
}
