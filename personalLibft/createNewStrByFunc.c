/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 15:46:18 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/20 17:19:08 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  createNewStrByFunc
 *  Description:  Applies the func to  each character of the string given
 *  			  as argument to create a “fresh” new string resulting from the
 *  			  successive applications of the func.
 * =============================================================================
 */
char	*createNewStrByFunc(char const *oldStrPtr, char (*func)(char))
{
	char	*newStrPtr = NULL;
	int		i = -1;

	if (!oldStrPtr) {
		return (NULL);
	}
	if (!(newStrPtr = (char *)malloc(sizeof(*oldStrPtr) * getStringLength(oldStrPtr) + 1))) {
		return (NULL);
	}
	while (oldStrPtr[++i]) {
		newStrPtr[i] = func(oldStrPtr[i]);
	}
	newStrPtr[i] = '\0';
	return (newStrPtr);
} 	 /* -----  end of function createNewStrByFunc  ----- */
