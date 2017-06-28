/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:18:53 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/27 13:47:40 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  isAllofSubstrInStr
 *  Description:  After the first character in the sub string pointed at by
 *  			  subStrPtr is found in the string pointed at strPtr check that
 *  			  the whole sub string is in sting.
 * =============================================================================
 */
static int	isAllOfSubstrInStr(const char *strPtr, const char *substrPtr, size_t substrLen, size_t nbrOfBytes)
{
	size_t	i = 0;

	while (substrPtr[i] && strPtr[i] == substrPtr[i]) {
		i++;
	}
	if (i == substrLen && i <= nbrOfBytes) {
		return (1);
	}
	return (0);
}		/* -----  end of function isAllOfSubstrInStr  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  isSubstrInStrBytes
 *  Description:  Locates the first occurrence of the null-terminated sub string
 *  			  pointed at by subStrPtr in the string pointed at by strPtr,
 *  			  where not more than nbrOfBytes are searched. Characters that
 *  			  appear after a `\0' character are not searched.
 * =============================================================================
 */
char		*isSubstrInStrBytes(const char *strPtr, const char *substrPtr, size_t nbrOfBytes)
{
	size_t	i = 0;
	size_t	substrLen = getStringLength(substrPtr);

	if (!substrPtr || strPtr == substrPtr) {
		return ((char *)strPtr);
	}
	while (strPtr[i++] && i + substrLen <= nbrOfBytes) {
		if (strPtr[i] == *substrPtr) {
			if (isAllOfSubstrInStr(&strPtr[i], substrPtr, substrLen, nbrOfBytes) == 1) {
				return ((char *)&strPtr[i]);
			}
		}
	}
	return (NULL);
}		/* -----  end of function isSubstrInStrBytes  ----- */
