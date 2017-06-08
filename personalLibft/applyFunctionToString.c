/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   applyFunctionToString.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 15:11:40 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/07 20:33:23 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  applyFunctionToString
 *  Description:  Applies the function f to each character of the string pointed
 *  			  to by the pointer passed as argument.
 * =============================================================================
 */
void	applyFunctionToString(char *stringPtr, void (*f)(char *)) {
	if (!stringPtr || !f) {
		return ;
	}
	while (*stringPtr) {
		f(stringPtr++);
	}
}	  /* -----  end of function applyFunctionToString  ----- */
