/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 08:24:26 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/06 18:24:43 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  printNumber
 *  Description:  Outputs a number to the standard output.
 * =============================================================================
 */
void	printNumber(int number) {
	if (number == -2147483648) {
		printCharacter('-');
		printCharacter('2');
		number = 147483648;
	}
	if (number < 0) {
		printCharacter('-');
		number *= -1;
	}
	if (number < 10) {
		printCharacter(number + '0');
		return ;
	}
	printNumber(number / 10);
	printCharacter((number % 10) + '0');
}		/* -----  end of function printNumber  ----- */
