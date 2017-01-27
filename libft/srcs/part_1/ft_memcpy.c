/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:52:56 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/26 20:21:40 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t		c;
	char		*s1;
	const char	*s2;

	c = 0;
	s1 = str1;
	s2 = str2;
	while (c < n)
	{
		s1[c] = s2[c];
		c++;
	}
	return (s1);
}
