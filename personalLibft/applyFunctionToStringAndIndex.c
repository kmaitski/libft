/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 16:03:15 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/07 20:33:02 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  applyFunctionToStringAndIndex
 *  Description:  Applies the function f to each character of the string pointed
 *  			  at by the pointer passed as argument, and passing its index as
 *  			  first argument. Each character is passed by address to f to be
 *  			  modified if necessary.
 * =============================================================================
 */
void	applyFunctionToStringAndIndex(char *stringPtr, void (*f)(unsigned int,
			char *)) {
	unsigned int	i = 0;

	if (!stringPtr || !f) {
		return ;
	}
	while (*stringPtr) {
		f(i++, stringPtr++);
	}
}	  /* -----  end of function applyFunctionToStringAndIndex  ----- */
