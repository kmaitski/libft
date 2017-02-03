/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:38:17 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 15:14:45 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_needle_in_haystack(const char *haystack,
		const char *needle, int l)
{
	int	c;

	c = 0;
	while (needle[c] != '\0' && haystack[c] == needle[c])
		c++;
	if (c == l)
		return (1);
	return (0);
}

char		*ft_strstr(const char *haystack, const char *needle)
{
	int	l;
	int	c;

	l = ft_strlen(needle);
	c = 0;
	if (needle[0] == '\0' || haystack == needle)
		return ((char *)haystack);
	while (haystack[c] != '\0')
	{
		if (haystack[c] == needle[0])
		{
			if (is_needle_in_haystack(&haystack[c], needle, l) == 1)
				return ((char *)&haystack[c]);
		}
		c++;
	}
	return (NULL);
}
