/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:16:37 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/07 19:54:28 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  stringCopy
 *  Description:  Copies the string pointed to by sourceStringPtr to
 *  			  destinationStringPtr.
 * =============================================================================
 */
char	*stringCopy(char *destinationStringPtr, const char *sourceStringPtr) {
	int	i = -1;

	while (sourceStringPtr[++i]) {
		destinationStringPtr[i] = sourceStringPtr[i];
	}
	destinationStringPtr[i] = '\0';
	return (destinationStringPtr);
}		/* -----  end of function stringCopy  ----- */
