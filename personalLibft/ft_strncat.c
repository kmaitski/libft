/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:33:14 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/20 17:53:37 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  appendStringBytes
 *  Description:  Appends the string pointed at by sourceStringPtr to the end of
 *  			  the string pointed to by destinationStingPtr up to nbrOfBytes 
 *  			  long.
 * =============================================================================
 */
char	*appendStrBytes(char *destStrPtr, const char *srcStrPtr, size_t nbrOfBytes)
{
	size_t	i = getStringLength(destStrPtr);
	size_t	index = 0;

	while (srcStrPtr[index] && index < nbrOfBytes) {
		destStrPtr[i++] = srcStrPtr[index++];
	}
	destStrPtr[i] = '\0';
	return (destStrPtr);
}		/* -----  end of function appendStrBytes  ----- */
