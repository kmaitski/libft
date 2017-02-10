/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:55:19 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/09 20:29:07 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		c;
	char		*d;
	const char	*s;

	c = 0;
	d = dest;
	s = src;
	if (dest < src)
	{
		while (c < n)
		{
			d[c] = s[c];
			c++;
		}
	}
	else
		while (n--)
			d[n] = s[n];
	dest = d;
	return (dest);
}
