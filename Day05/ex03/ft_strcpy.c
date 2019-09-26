/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 14:23:12 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/11 12:32:32 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (dest == 0 || src == 0)
		return (dest);
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = src[i];
	return (dest);
}
