/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:52:56 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/27 19:50:56 by kmaitski         ###   ########.fr       */
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
	char		*char_str1;
	const char	*char_str2;
	size_t		i;

	char_str1 = str1;
	char_str2 = str2;
	i = -1;
	while (++i < n)
		char_str1[i] = char_str2[i];
	return (char_str1);
}		/* -----  end of function ft_memcpy  ----- */
