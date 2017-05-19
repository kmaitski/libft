/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoiBase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 10:14:48 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/18 21:10:03 by kmaitski         ###   ########.fr       */
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
 *  Description:  function that converts the string argument str (base N <= 16)
 *  			  to an integer (base 10) and returns it.
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
	int	isNegative;

	isNegative = 1;
	while (*STR < 33 || *STR == 127)
		STR++;
	if (*STR == '-')
		isNegative = -1;
	if (*STR == '-' || *STR == '+')
		STR++;
	return (getResult(&*STR, strBase) * isNegative);
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
static int			getValue(char hexLetter, int strBase) {
	int	i;
	static int	*hex = NULL;
	if (!hex)
		hex = intializeHexArray();
	i = 9;
	if (hexLetter >= 'A' && hexLetter <= 'F')
		hexLetter += 32;
	if (hexLetter >= '0' && hexLetter <= '9') {
		hexLetter -= '0';
		return (hexLetter);
	}
	else {
		while (++i <= strBase)
			if (hexLetter == hex[i])
			return (i);
	}
	return (-1);
}		/* -----  end of function getValue  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  getResult
 *  Description:  Get the result for ft_atoi_base
 * =============================================================================
 */
static unsigned int	getResult(const char *STR, int strBase) {
	unsigned int	i;
	int				value;
	unsigned int	result;

	i = 0;
	result = 0;
	while ((STR[i] >= '0' && STR[i] <= '9') || (STR[i] >= 'a' && STR[i] <= 'f')
		|| (STR[i] >= 'A' && STR[i] <= 'F')) {
		value = getValue(STR[i], strBase);
		if (value < 0)
			return (result);
		result = result * strBase + value;
		i++;
	}
	return (result);
}		/* -----  end of function getResult  ----- */


