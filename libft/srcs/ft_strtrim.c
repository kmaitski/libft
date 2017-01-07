/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 18:19:36 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/06 18:53:10 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_before(char const *s)
{
	int	x;

	x = 0;
	while (s[x] == ' ' || s[x] == '\n' || s[x] == '\t')
		x++;
	return (x);
}

static	size_t	count_after(char const *s)
{
	int	length;
	int	x;

	x = 0;
	length = ft_strlen(s);
	while (s[length] == ' ' || s[length] == '\n' || s[length] == '\t')
	{
		length--;
		x++;
	}
	return (x);
}

char			*ft_strtrim(char const *s)
{
	int			length;
	char		*copy;
	size_t		x;
	int			counter;
	size_t		y;

	x = count_before(s);
	y = count_after(s);
	counter = 0;
	length = ft_strlen(s) - x - y;
	copy = ft_strnew(length);
	while (s[x] != '\0' && x < length - y)
	{
		copy[counter] = s[x];
		x++;
		counter++;
	}
	return (copy);
}
