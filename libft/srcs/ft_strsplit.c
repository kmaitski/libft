/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 21:09:12 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/05 22:01:10 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	**ft_strsplit(char const *s, char c)
{
	int		x;
	int		y;
	int		z;
	char	**arr;

	x = 0;
	y = 0;
	z = 0;
	arr = malloc(ft_strlen((char*)s));
	while (s[x] != '\0')
	{
		while (s[x] == c)
			x++;
		while (s[x] != c || s[x] != '\0')
		{
			arr[y][z] = s[x];
			x++;
			z++;
		}
		arr[y][z] = '\0';
		y++;
		z = 0;
		x++;
	}
	return (arr);
}
