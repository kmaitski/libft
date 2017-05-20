/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:53:22 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/19 22:52:43 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  ft_memchr
 *  Description:  Searches for the first occurrence of the character c (an
 *  			  unsigned char) in the first n bytes of the string pointed to
 *  			  by the argument str.
 * =============================================================================
 */
#include <stdio.h>
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
}		/* -----  end of function ft_memchr  ----- */
