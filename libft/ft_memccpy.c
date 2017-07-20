/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 12:49:34 by kmaitski          #+#    #+#             */
/*   Updated: 2017/07/19 23:34:00 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	char			*char_dest;
	const char		*char_src;

	i = 0;
	char_dest = (char *)dest;
	char_src = (char *)src;
	if (dest == src)
		return (dest);
	while (n--)
	{
		char_dest[i] = char_src[i];
		if (char_dest[i] == c)
			return (&char_dest[++i]);
		i++;
	}
	return (NULL);
}
