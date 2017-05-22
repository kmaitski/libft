/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 12:46:35 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/22 07:54:18 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	size_t			dest_len;
	size_t			src_len;
	unsigned int	bytes_to_copy;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	bytes_to_copy = n - dest_len - 1;
	if (n < dest_len)
		return (src_len + n);
	while (*dest)
		dest++;
	while (src[i] && i < bytes_to_copy)
		*dest++ = src[i++];
	*dest = '\0';
	return (src_len + dest_len);
}
