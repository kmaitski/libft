/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:55:19 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/07 19:00:25 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  memoryMove
 *  Description:  Copies nbrOfBytes from destinationMemoryAreaPtr to
 *  			  sourceMemoryAreaPtr. For overlapping memory blocks, memoryMove is a
 *  			  safer approach than memoryCopy.
 * =====================================================================================
 */
void	*memoryMove(void *destinationMemoryArea, const void *sourceMemoryAreaPtr, size_t
		nbrOfBytes) {
	int		i;
	char		*destinationStringPtr = (char *)destinationMemoryArea;
	const char	*sourceStringPtr = (char *)sourceMemoryAreaPtr;

	i = -1;
	if (destinationStringPtr < sourceStringPtr) {
		while (++i < (int)nbrOfBytes) {
			destinationStringPtr[i] = sourceStringPtr[i];
		}
	}
	else {
		while (nbrOfBytes--) {
			destinationStringPtr[nbrOfBytes] = sourceStringPtr[nbrOfBytes];
		}
	}
	return (destinationStringPtr);
}		/* -----  end of function memoryMove  ----- */
