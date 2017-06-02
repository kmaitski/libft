/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:55:51 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/02 15:59:25 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  memorySet
 *  Description:  Copies character (an unsigned char) to the first
 *  			  nbrOfCharacters to the memory area pointed to by memoryAreaPtr
 * =============================================================================
 */
void	*memorySet(void *memoryAreaPtr, int character, size_t nbrOfCharacters) {
	char	*charMemoryAreaPtr;
	size_t	i;

	charMemoryAreaPtr = (char *)memoryAreaPtr;
	i = 0;
	while (nbrOfCharacters--) {
		charMemoryAreaPtr[i++] = character;
	}
	return (charMemoryAreaPtr);
}		/* -----  end of function memorySet  ----- */
