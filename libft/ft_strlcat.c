/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 12:46:35 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/22 16:59:17 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	int		i;
	size_t	dest_len;
	size_t	src_len;
	int		bytes_to_copy;

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
