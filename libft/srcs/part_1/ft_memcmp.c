/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:54:30 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/27 12:11:03 by kmaitski         ###   ########.fr       */
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
	if (!s1 && !s2)
		return (0);
	while (c <= n && s1[c] == s2[c])
	{
		c++;
		if (c == n || (s1[c] == '\0' && s2[c] == '\0'))
			return (0);
	}
	return (s1[c] - s2[c]);
}

int	main(void)
{
   	char *s1 = "\xff\xaa\xde\x12";
	char *s2 = "\xff\xaa\xde\x12MACOSAAAAA";
	size_t size = 9;
	printf("%d", ft_memcmp(s1, s2, size));
	return (0);
}
