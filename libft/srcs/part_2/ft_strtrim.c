/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 18:19:36 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/20 11:47:57 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static	size_t	count_before(char const *s)
{
	size_t	x;

	x = 0;
	while (s[x] == ' ' || s[x] == '\n' || s[x] == '\t')
		x++;
	return (x);
}

static	size_t	count_after(char const *s)
{
	int	length;
	size_t	x;

	x = 0;
	length = ft_strlen(s);
	length--;
	while (s[length] == ' ' || s[length] == '\n' || s[length] == '\t')
	{
		length--;
		x++;
	}
	return (x);
}

char			*ft_strtrim(char const *s)
{
	size_t		length;
	char		*copy;
	size_t		x;
	size_t		counter;
	size_t		y;

	if (!s)
		return (NULL);
	x = count_before(s);
	y = count_after(s);
	counter = 0;
	length = ft_strlen(s) - x - y;
	copy = ft_strnew(length);
	if (!copy)
		return (NULL);
	while (counter < length  && length > 0)
	{
		copy[counter] = s[x];
		x++;
		counter++;
	}
	return (copy);
}
