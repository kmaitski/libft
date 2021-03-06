/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:55:19 by kmaitski          #+#    #+#             */
/*   Updated: 2017/07/19 23:08:54 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*char_dest;
	unsigned const char	*char_src;

	i = -1;
	char_dest = (unsigned char *)dest;
	char_src = (unsigned const char *)src;
	if (char_dest < char_src)
		while (++i < n)
			char_dest[i] = char_src[i];
	else
		while (n--)
			char_dest[n] = char_src[n];
	return (char_dest);
}
