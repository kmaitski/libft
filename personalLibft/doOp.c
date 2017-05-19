/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:47:40 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/18 21:05:47 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  doOp
 *  Description:  Return the result of the requested arithmetic operation. You
 *  			  can assume the string have no mistakes or extraneous
 *  			  characters. Negative numbers, in input or output, will have
 *  			  one and only one leading '-'. The result of the operation fits
 *  			  in an int.
 * =============================================================================
 */
int	doOp(int number1, char sign, int number2) {
	if (sign == '+')
		return (number1 + number2);
	if (sign == '-')
		return (number1 - number2);
	if (sign == '*')
		return (number1 * number2);
	if (sign == '/')
		return (number1 / number2);
	if (sign == '%')
		return (number1 % number2);
	else
		return (0);
}		/* -----  end of function doOp  ----- */
