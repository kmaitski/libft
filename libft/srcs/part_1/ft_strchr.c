/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:56:31 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/20 11:56:34 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	x;
	int	y;
	char	*s;

	x = 0;
	y = 0;
	while (str[x] != '\0')
	{
		if (str[x] == c)
		{
			while (str[x] != c)
				y++;
			s = ft_strnew(y);
			y = 0;
			while (str[x] != '\0')
			{
				s[y] = str[x];
				y++;
				x++;
			}
			s[y] = '\0';
			return (s);
		}
		x++;
	}
	return (NULL);
}
