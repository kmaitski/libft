/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:53:22 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/21 22:27:46 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*char_str;

	char_str = (const char *)str;
	while (n--)
	{
		if (*char_str == (char)c)
			return ((void*)char_str);
		char_str++;
	}
	return (NULL);
}
