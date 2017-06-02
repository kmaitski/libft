/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 09:25:56 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/02 16:39:39 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  convertWchartoUtf8
 *  Description:  Converts a wchar to UTF 8 by maniuplting the bits of to fit
 *  			  into the UTF 8 encoding scheme.
 * =================================================================================
 */
static unsigned char	*convertWcharToUtf8(wchar_t character) {
	size_t			i;
	unsigned char	bytes[5];
	unsigned char	*bytesPtr;

	i = 0;
	if (character <= 0x7F) {
		bytes[1] = '\0';
		bytes[0] = (unsigned char)character;
	}
	else if (character <= 0x7FF) {
		bytes[2] = '\0';
		bytes[1] = 0x80 | (character & 0x3F);
		character = character >> 6;
		bytes[0] = character | 0xC0;
	}
	else if (character <= 0xFFFF) {
		bytes[3] = '\0';
		bytes[2] = 0x80 | (character & 0x3F);
		character = character >> 6;
		bytes[1] = 0x80 | (character & 0x3F);
		character = character >> 6;
		bytes[0] = 0xE0 | character;
	}
	else {
		bytes[4] = '\0';
		bytes[3] = 0x80 | (character & 0x3F);
		character = character >> 6;
		bytes[2] = 0x80 | (character & 0x3F);
		character = character >> 6;
		bytes[1] = 0x80 | (character & 0x3F);
		character = character >> 6;
		bytes[0] = 0xF0 | character;
	}
	bytesPtr = bytes;
	return (bytesPtr);
}		/* -----  end of function convertWchartoUtf8  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  printCharacter
 *  Description:  Outputs character to the standard output.
 * =============================================================================
 */
void	printCharacter(wchar_t character) {
	size_t			i;
	unsigned char	*bytesPtr;

	bytesPtr = convertWcharToUtf8(character);
	i = 0;
	while (bytesPtr[i]) {
		write(1, &bytesPtr[i], 1);
		i++;
	}
} 		/* -----  end of function printCharacter  ----- */
