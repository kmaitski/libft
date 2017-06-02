/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pgcd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 08:09:48 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/02 16:08:24 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  getHighestCommonDenominator
 *  Description:  Takes two positive integers and returns their highest common
 *  			  denominator.
 * =============================================================================
 */
int	getHighestCommonDenominator(unsigned int firstNumber, unsigned int secondNumber) {
	unsigned int	denominator = 1;
	unsigned int	highestCommonDenominator = 0;

	while (denominator <= firstNumber && denominator <= secondNumber) {
		if (!(firstNumber % denominator) && !(secondNumber % denominator)) {
			highestCommonDenominator = denominator;
		}
		denominator++;
	}
	return (highestCommonDenominator);
}		/* -----  end of function getHighestCommonDenominator  ----- */
