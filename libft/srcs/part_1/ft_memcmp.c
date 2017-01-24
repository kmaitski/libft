/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:54:30 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/20 11:54:38 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t		c;
	unsigned char	*s1;
	unsigned char	*s2;

	c = 0;
	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	printf("%s", s1);
	while (c < n && s1[c] == s2[c])
		c++;
	return (s1[c] - s2[c]);
}
