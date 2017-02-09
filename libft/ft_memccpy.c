/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 12:49:34 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 14:54:33 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		co;
	char		*d;
	char		*s;

	co = 0;
	d = (char *)dest;
	s = (char *)src;
	if (dest == src)
		return (dest);
	while (co < n)
	{
		d[co] = s[co];
		if (d[co] == c)
			return (&d[++co]);
		co++;
	}
	return (NULL);
}
