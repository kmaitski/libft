/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:34:23 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/20 17:57:19 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  stringCompareBytes
 *  Description:  Compares at most the first nbrOfBytes of the strings pointed
 *  to by str1Ptr and str2Ptr.
 * =============================================================================
 */
int	stringCompareBytes(const char *str1Ptr, const char *str2Ptr, size_t nbrOfBytes)
{
	size_t	i;

	i = -1;
	while (++i < n && i <= ft_strlen(str1) && i <= ft_strlen(str2))
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	i--;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}		/* -----  end of function ft_strncmp  ----- */
