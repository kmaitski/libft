/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doOp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:47:40 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/22 20:56:06 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  doOp
 *  Description:  Return the result of the requested arithmetic operation. The
 *  			  result of the operation fits in an int. If sign is not an
 *  			  arithmetic operator it returns 0.
 * =============================================================================
 */
int	doOp(int number1, char sign, int number2) {
	if (sign == '+') {
		return (number1 + number2);
	}
	if (sign == '-') {
		return (number1 - number2);
	}
	if (sign == '*') {
		return (number1 * number2);
	}
	if (sign == '/') {
		return (number1 / number2);
	}
	if (sign == '%') {
		return (number1 % number2);
	}
	else {
		return (0);
	}
}		/* -----  end of function doOp  ----- */
