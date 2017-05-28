/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:53:22 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/27 19:17:30 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  memoryCharacterCheck
 *  Description:  Searches for the first occurrence of the character (an
 *  			  unsigned char) in the first nbrOfBytes of the string pointed
 *  			  to by the argument STRINGPTR.
 * =============================================================================
 */
void	*memoryCharacterCheck(const void *STRINGPTR, unsigned char character,
		size_t nbrOfBytes) {
	const char	*CHARSTRINGPTR = (const char *)STRINGPTR;

	while (nbrOfBytes--) {
		if (*CHARSTRINGPTR == character) {
			return ((void*)CHARSTRINGPTR);
		}
		CHARSTRINGPTR++;
	}
	return (NULL);
}		/* -----  end of function memoryCharacterCheck  ----- */
