/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchAndReplace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:46:07 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/07 19:22:10 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  searchAndReplace
 *  Description:  In the string pointed to at stringPtr change characters that
 *  			  match the badCharacter with the replacementCharacter.
 * =============================================================================
 */
char	*searchAndReplace(char *stringPtr, char badCharacter, char
		replacementCharacter) {
	int	i;

	i = -1;
	while (stringPtr[++i]) {
		if (stringPtr[i] == badCharacter) {
			stringPtr[i] = replacementCharacter;
		}
	}
	return (stringPtr);
}		/* -----  end of function searchAndReplace  ----- */
