/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:36:41 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/07 19:33:32 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  searchStringForCharacter
 *  Description:  Searches for the first occurrence of the character (an
 *  		 	  unsigned char) in the string pointed to by the argument
 *  		 	  stringPtr.
 * =============================================================================
 */
char	*searchStringForCharacter(const char *stringPtr, int character) {
	while (*stringPtr && *stringPtr != character) {
		stringPtr++;
	}
	if (*stringPtr == character) {
		return ((char*)stringPtr);
	}
	return (NULL);
}		/* -----  end of function searchStringForCharacter  ----- */
