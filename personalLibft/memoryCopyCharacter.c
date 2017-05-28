/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memCCpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 12:49:34 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/27 19:31:46 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  memoryCharacterCopy
 *  Description:  Copies no more than nbrOfBytes from memory area pointed to by
 *  			  pSourceArea to memory area pSestinationArea, stopping when the
 *  			  passed character is found. If the memory areas overlap, the
 *  			  results are undefined.
 * =============================================================================
 */
void	*memoryCharacterCopy(void *destinationAreaPtr, const void *SOURCEAREAPTR,
		int character,size_t nbrOfBytes) {
	unsigned int	i = 0;
	char			*charDestinationAreaPtr = (char *)destinationAreaPtr;
	const char		*CHARSOURCEAREAPTR = (char *)SOURCEAREAPTR;

	if (destinationAreaPtr == SOURCEAREAPTR) {
		return (destinationAreaPtr);
	}
	while (nbrOfBytes--) {
		charDestinationAreaPtr[i] = CHARSOURCEAREAPTR[i];
		if (charDestinationAreaPtr[i] == character) {
			return (&charDestinationAreaPtr[++i]);
		}
		i++;
	}
	return (NULL);
}		/* -----  end of function memoryCharcterCopy  ----- */
