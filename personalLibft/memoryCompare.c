/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:54:30 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/27 19:45:36 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  memoryCompare
 *  Description:  Compares the first nbrOfBytes of MEMORYAREA1PTR and 
 *  			  MEMORYAREA2PTR.  This function replicates memcmp from the
 *  			  string.h standard C library.
 * =============================================================================
 */
int	memoryCompare(const void *MEMORYAREA1PTR, const void *MEMORYAREA2PTR, size_t
		nbrOfBytes) {
	unsigned const char	*CHARMEMORYAREA1PTR =
		(unsigned const char *)MEMORYAREA1PTR;
	unsigned const char	*CHARMEMORYAREA2PTR =
		(unsigned const char *)MEMORYAREA2PTR;

	while (nbrOfBytes--) {
		if (*CHARMEMORYAREA1PTR != *CHARMEMORYAREA2PTR) {
			return (*CHARMEMORYAREA1PTR - *CHARMEMORYAREA2PTR);
		}
		CHARMEMORYAREA1PTR++;
		CHARMEMORYAREA2PTR++;
	}
	return (0);
}		/* -----  end of function memoryCompare  ----- */
