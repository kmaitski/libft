/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 16:23:56 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/20 17:44:08 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  createNewStrByFuncI
 *  Description:  Applies the func  to each character of the string passed
 *  			  as argument by giving its index as first argument to create a
 *  			  “fresh” new string resulting from the successive applications 
 *  			  of f.
 * =============================================================================
 */
char	*createNewStrByFuncI(char const *oldStrPtr, char (*func)(unsigned int, char))
{
	unsigned int	i = 0;
	char			*newStrPtr;

	if (!oldStrPtr || !func) {
		return (NULL);
	}
	if (!(newStrPtr = (char *)malloc(sizeof(*oldStrPtr) * getStringLength(oldStrPtr) + 1))) {
		return (NULL);
	}
	while (oldStrPtr[i]) {
		newStrPtr[i] = func(i, oldStrPtr[i]);
		i++;
	}
	newStrPtr[i] = '\0';
	return (newStrPtr);
}	  /* -----  end of function createNewStrByFuncI  ----- */
