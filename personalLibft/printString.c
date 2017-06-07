/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 09:27:11 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/06 18:49:26 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  printString
 *  Description:  Outputs the string pointed at by stringPtr to the standard
 *  			  output. 
 * =============================================================================
 */
void	printString(char const *stringPtr) {
	if (!stringPtr) {
		return ;
	}
	while (*stringPtr) {
		printCharacter(*stringPtr++);
	}
}		/* end of printString function */
