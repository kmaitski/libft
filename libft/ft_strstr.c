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

static int	is_needle_in_haystack(const char *haystack, const char *needle)
{
	int	c;
	int	l;

	c = 0;
	l = ft_strlen(needle);
	while (needle[c] != '\0' && haystack[c] == needle[c])
		c++;
	if (c == l)
		return (1);
	return (0);
}

char		*ft_strstr(const char *haystack, const char *needle)
{
	if (*needle == '\0' || haystack == needle)
		return ((char *)haystack);
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			if (is_needle_in_haystack(haystack, needle) == 1)
				return ((char*)haystack);
		}
		haystack++;
	}
	return (NULL);
}
