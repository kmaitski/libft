/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:47:57 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/02 16:14:10 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  printBits
 *  Description:  Takes a byte and prints it in binary.
 * =============================================================================
 */
void	printBits(unsigned char byte) {
	unsigned int	bits;

	bits = 8;
	while (bits--) {
		if (byte / 128) {
			write(1, "1", 1);
		}
		else {
			write(1, "0", 1);
		}
		byte <<= 1;
	}
}		/* -----  end of function printBits  ----- */
