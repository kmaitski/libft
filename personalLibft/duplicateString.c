/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:17:39 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/07 20:06:54 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  duplicateString
 *  Description:  Returns a pointer to a newly allocated string which is a
 *  			  duplicate of the string pointed to by stringPtr.
 * =============================================================================
 */
char	*duplicateString(const char *stringPtr) {
	char	*newStringPtr;
	int		i = -1;

	if (!(newStringPtr = createNewString(getStringLength(stringPtr)))) {
		return (NULL);
	}
	while (stringPtr[++i]) {
		newStringPtr[i] = stringPtr[i];
	}
	return (newStringPtr);
}		/* -----  end of function duplicateString  ----- */
