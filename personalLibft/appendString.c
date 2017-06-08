/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   appendString.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:56:14 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/07 19:35:06 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  appendString
 *  Description:  Appends the string pointed to by sourceStringPtr to the end of
 *  			  the string pointed to by destinationStringPtr.
 * =============================================================================
 */
char	*appendString(char *destinationStringPtr, const char *sourceStringPtr) {
	size_t	i;

	i = getStringLength(destinationStringPtr);
	while (*sourceStringPtr) {
		destinationStringPtr[i++] = *sourceStringPtr++;
	}
	destinationStringPtr[i] = '\0';
	return (destinationStringPtr);
}		/* -----  end of function appendString  ----- */
