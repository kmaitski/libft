/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 12:47:55 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/25 20:41:27 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  strCpyBytes
 *  Description:  Copies up to nbrOfBytes from the string pointed to by strPtr
 *  			  to the memory area pointed at by destMemAreaPtr. In a case
 *  			  where the length of the string is less than that of
 *  			  nbrOfBytes, the remainder of the memory area will be padded
 *  			  with null bytes.
 * =============================================================================
 */
char	*ft_strncpy(char *destMemAreaPtr, const char *strPtr, size_t nbrOfBytes)
{
	size_t	i = 0;

	while (strPtr[i] && i < nbrOfBytes) {
		destMemAreaPtr[i] = strPtr[i];
		i++;
	}
	while (i < nbrOfBytes) {
		destMemAreaPtr[i++] = '\0';
	}
	return (destMemAreaPtr);
}		/* -----  end of function strCpyBytes  ----- */
