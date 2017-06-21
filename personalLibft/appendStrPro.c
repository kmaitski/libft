/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 12:46:35 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/20 16:49:24 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  appendStrPro
 *  Description:  Appends the NUL-terminated string src to the end of dst. It
 *  			  will append at most size - strlen(dst) - 1 bytes,
 *  			  NULL-terminating the result.
 *
 *  			  If it is possible to append the full sting pointed at by
 *  			  sourceStringPtr to destinationStringPtr it will return the
 *  			  size of the freshly appeneded string.  If it is not it will
 *  			  return the length of the source string plus size.
 * ==============================================================================
 */
size_t	appendStrPro(char *destStrPtr, const char *srcStrPtr, size_t size)
{
	unsigned int	i = 0;
	size_t			destinationStringLength = getStringLength(destStrPtr);
	size_t			sourceStingLength = getStringLength(srcStrPtr);
	unsigned int	bytesToCopy;

	bytesToCopy = size - destinationStringLength - 1;
	if (size < destinationStringLength) {
		return (sourceStingLength + size);
	}
	while (*destStrPtr) {
		destStrPtr++;
	}
	while (srcStrPtr[i] && size < bytesToCopy) {
		*destStrPtr++ = srcStrPtr[i++];
	}
	*destStrPtr = '\0';
	return (destinationStringLength + destinationStringLength);
}		/* -----  end of function appendStrPro  ----- */
