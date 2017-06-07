/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 09:12:01 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/06 18:37:49 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  writeNumberToFileDescriptor
 *  Description:  Outputs a number to a fileDescriptor.
 * =============================================================================
 */
void	writeNumberToFileDescriptor(int number, int fileDescriptor) {
	if (number == -2147483648) {
		writeCharacterToFileDescriptor('-', fileDescriptor);
		writeCharacterToFileDescriptor('2', fileDescriptor);
		number = 147483648;
	}
	if (number < 0) {
		writeCharacterToFileDescriptor('-', fileDescriptor);
		number *= -1;
	}
	if (number < 10) {
		writeCharacterToFileDescriptor(number + '0', fileDescriptor);
		return ;
	}
	writeNumberToFileDescriptor(number / 10, fileDescriptor);
	writeCharacterToFileDescriptor((number % 10) + '0', fileDescriptor);
}		/* -----  end of function writeNumberToFileDescriptor  ----- */
