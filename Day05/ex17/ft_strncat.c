/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 19:04:31 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/12 11:52:37 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int l;
	int i;

	l = 0;
	i = 0;
	if (dest == 0 || src == 0)
		return (dest);
	while (dest[l])
		l++;
	while (src[i] && i < nb)
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (dest);
}
