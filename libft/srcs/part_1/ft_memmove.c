/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:55:19 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/20 11:55:31 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t		c;
	char		*d;
	const char	*s;

	c = 0;
	d = str1;
	s = str2;
	while (c < n)
	{
		d[c] = s[c];
		c++;
	}
	return (d);
}
