/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 08:03:02 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/06 18:04:58 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  printStringWithNewLine
 *  Description:  Outputs the string pointed at by stringPtr to the standard
 *  			  output followed by a ’\n’.
 * =============================================================================
 */
void	printStringWithNewLine(char const *stringPtr) {
	if (!stringPtr) {
		return ;
	}
	while (*stringPtr) {
		printCharacter(*stringPtr++);
	}
	printCharacter('\n');
}		/* -----  end of function printStringWithNewLine  ----- */
