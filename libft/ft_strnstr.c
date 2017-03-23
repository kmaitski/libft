/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:18:53 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/15 21:05:44 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_needle_in_haystack(const char *haystack, const char *needle,
		size_t needle_length, size_t len)
{
	size_t	i;

	i = 0;
	while (needle[i] != '\0' && haystack[i] == needle[i])
		i++;
	if (i == needle_length && i <= len)
		return (1);
	return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_length;

	i = 0;
	needle_length = ft_strlen(needle);
	if (needle[0] == '\0' || haystack == needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i + needle_length <= len)
	{
		if (haystack[i] == needle[0])
			if (is_needle_in_haystack(&haystack[i], needle,
						needle_length, len) == 1)
				return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
