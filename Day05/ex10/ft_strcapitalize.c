/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 18:12:40 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/12 19:09:51 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LOW(x)  (str[x] >= 'a' && str[x] <= 'z')
#define NUM(x)	(str[x] >= '0' && str[x] <= '9')
#define UP(x)	(str[x] >= 'A' && str[x] <= 'Z')

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (LOW(i))
		{
			if (LOW(i - 1) || UP(i - 1) || NUM(i - 1))
				i++;
			else
			{
				str[i] = str[i] - 'a' + 'A';
				i++;
			}
		}
		else if (UP(i) && (LOW(i - 1) || UP(i - 1) || NUM(i - 1)))
		{
			str[i] = str[i] - 'A' + 'a';
			i++;
		}
		else
			i++;
	}
	return (str);
}
