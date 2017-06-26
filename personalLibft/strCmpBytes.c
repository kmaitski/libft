/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:34:23 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/25 20:25:34 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  strCmpBytes
 *  Description:  Compares at most the first nbrOfBytes of the strings pointed
 *  			  to by str1Ptr and str2Ptr.
 * =============================================================================
 */
int	strCmpBytes(const char *str1Ptr, const char *str2Ptr, size_t nbrOfBytes)
{
	int	i;

	i = -1;
	while ((size_t)++i < nbrOfBytes && (size_t)i <= getStringLength(str1Ptr) && (size_t)i <= getStringLength(str2Ptr)) {
		if (str1Ptr[i] != str2Ptr[i]) {
			return ((unsigned char)str1Ptr[i] - (unsigned char)str2Ptr[i]);
		}
	}
	i--;
	return ((unsigned char)str1Ptr[i] - (unsigned char)str2Ptr[i]);
}		/* -----  end of function stringCmpBytes  ----- */
