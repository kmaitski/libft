/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:52:56 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/27 20:34:15 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  memoryCopy
 *  Description:  Copies nbrOfCharacters from memoryArea2Ptr to memoryArea1Ptr.
 *  			  This function replicates memcpy from the string.h standard C
 *  			  library.
 * =============================================================================
 */
void	*memoryCopy(void *memoryArea1Ptr, const void *MEMORYAREA2PTR, size_t
		nbrOfCharacters) {
	char		*charMemoryArea1Ptr = (char *)memoryArea1Ptr;
	const char	*CHARMEMORYAREA2PTR = (const char *)MEMORYAREA2PTR;
	size_t		i = -1;

	while (++i < nbrOfCharacters) {
		charMemoryArea1Ptr[i] = CHARMEMORYAREA2PTR[i];
	}
	return (charMemoryArea1Ptr);
}		/* -----  end of function memoryCopy  ----- */
