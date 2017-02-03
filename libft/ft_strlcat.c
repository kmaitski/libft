/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 12:46:35 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 15:11:38 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	c;
	size_t	x;

	c = 0;
	if (n == 0)
		return (ft_strlen(dest));
	while (dest[c] != '\0' && c < n)
		c++;
	x = c;
	while (src[c - x] != '\0' && c < n - 1)
	{
		dest[c] = src[c - x];
		c++;
	}
	if (x < n)
		dest[c] = '\0';
	return (x + ft_strlen(src));
}
