/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringClear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 10:09:59 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/07 19:38:01 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  clearString
 *  Description:  Sets every character of the string to the value ’\0’.
 * =============================================================================
 */
void	clearString(char *stringPtr)
{
	if (!stringPtr) {
		return ;
	}
	while (*stringPtr) {
		*stringPtr++ = '\0';
	}
}	  /* -----  end of function clearString  ----- */
