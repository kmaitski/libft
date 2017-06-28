/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 13:58:48 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/25 21:13:31 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  createNewString
 *  Description:  Allocates and returns a “fresh” string of ’\0’ characters. If
 *  			  the allocation fails the function returns NULL.
 * =============================================================================
 */
char	*createNewString(size_t sizeOfString)
{
	char	*strPtr = NULL;
	size_t	i = 0;

	if (!(strPtr = (char *)malloc(sizeof(*strPtr) * sizeOfString + 1))) {
		return (NULL);
	}
	while (i <= sizeOfString) {
		strPtr[i++] = '\0';
	}
	return (strPtr);
}	  /* -----  end of function createNewString  ----- */

