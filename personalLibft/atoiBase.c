/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoiBase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 10:14:48 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/22 21:00:12 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/******************************************************
**               funtion prototypes                 ***
*******************************************************/
int atoiBase(const char *STR, int strBase);
static int *intializeHexArray(void);
static int getValue(char hexLetter, int strBase);
static unsigned int getResult(const char *STR, int strBase);

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  atoiBase
 *  Description:  Converts the string argument str (base strBase <= 16) to an
 *  			  integer (base 10) and returns it.
 *
 *				  The characters recognized in the input are: 0123456789abcdef.
 *				  Those are, of course, to be trimmed according to the 
 *				  requested base. For example, base 4 recognizes "0123" and base
 *				  16 recognizes "0123456789abcdef".
 *
 *  			  Uppercase letters must also be recognized: "12fdb3" is the
 *  			  same as "12FDB3".
 *
 *  			  Minus signs ('-') are interpreted only if they are the first
 *  			  character of the string.
 * =============================================================================
 */

int					atoiBase(const char *STR, int strBase) {
	int	negativeNbr;

	negativeNbr = 1;
	while (*STR < 33 || *STR == 127)
		STR++;
	if (*STR == '-')
		negativeNbr = -1;
	if (*STR == '-' || *STR == '+')
		STR++;
	return (getResult(&*STR, strBase) * negativeNbr);
}		/* -----  end of function atoiBase  ----- */
/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  intializeHexArray
 *  Description:  Intializes the hex_array for use.
 * =============================================================================
 */
static int			*intializeHexArray(void) {
	unsigned int		i;
	char				hexLetters;
	int					hexArray[16];
	int					*returnArray;

	i = 0;
	hexLetters = 'a';
	while (i < 10) {
		hexArray[i] = i;
		i++;
	}
	while (i < 16)
		hexArray[i++] = hexLetters++;
	returnArray = hexArray;
	return (returnArray);
}		/* -----  end of function intializeHexArray  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  getValue
 *  Description:  Returns the value for one spot on the string.
 * =============================================================================
 */
static int			getValue(char hexCharacter, int strBase) {
	int			i = 9;
	static int	*hexArray = NULL;
	
	if (!hex) {
		hexArray = intializeHexArray();
	}
	if (hexCharacter >= 'A' && hexCharacter	<= 'F')
		hexCharacter += 32;
	if (hexCharacter >= '0' && hexCharacter <= '9') {
		hexCharacter -= '0';
		if (hexCharacter < strBase) {
			return (hexCharacter);
		}
	}
	else {
		while (++i <= strBase) {
			if (hexLetter == hexArray[i]) {
				return (i);
			}
		}
	}
	return (-1);
}		/* -----  end of function getValue  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  getResult
 *  Description:  Calculates the result for ft_atoi_base
 * =============================================================================
 */
static unsigned int	getResult(const char *STR, int strBase) {
	unsigned int	i = 0;
	int				value;
	unsigned int	result = 0;

	while ((STR[i] >= '0' && STR[i] <= '9') || (STR[i] >= 'a' && STR[i] <= 'f')
		|| (STR[i] >= 'A' && STR[i] <= 'F')) {
		value = getValue(STR[i], strBase);
		if (value < 0)
			return (0);
		result = result * strBase + value;
		i++;
	}
	return (result);
}		/* -----  end of function getResult  ----- */


