/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 14:41:12 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/06 19:36:19 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  getLenOfArrayOfConsecutiveInts
 *  Description:  Returns the size of the array of consecutive integers to be
 *  			  used in malloc.
 * =================================================================================
 */

static size_t	getLenOfArrayOfConsecutiveInts(int startingInteger, int endingInteger) {
	int	lengthOfArrayOfConsecutiveInts = 0;

	if (startingInteger > endingInteger) {
		lengthOfArrayOfConsecutiveInts = startingInteger - endingInteger + 1;
	}
	else {
		lengthOfArrayOfConsecutiveInts = endingInteger - startingInteger + 1;
	}
	return ((size_t)lengthOfArrayOfConsecutiveInts);
}		/* -----  end of function getLenOfArrayOfConsecutiveInts ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  fillArrayOfConsecutiveIntegers
 *  Description:  Fills the array with integers that begins with start and ends
 *  			  with end.
 * =====================================================================================
 */
static void		fillArrayOfConsecutiveIntegers(int startingInteger, int endingInteger,
		int **arrayOfConsecutiveIntegers, size_t lengthOfArrayOfConsecutiveInts) {
	size_t	i = 0;

	if (lengthOfArrayOfConsecutiveInts == 1) {
		*arrayOfConsecutiveIntegers[0] = startingInteger;
	}
	else if (startingInteger > endingInteger) {
		while (i < lengthOfArrayOfConsecutiveInts) {
			*arrayOfConsecutiveIntegers[i++] = startingInteger--;
		}
	}
	else if (endingInteger > startingInteger) {
		while (i < lengthOfArrayOfConsecutiveInts) {
			*arrayOfConsecutiveIntegers[i++] = startingInteger++;
		}
	}
}		/* -----  end of function fillArrayOfConsecutiveIntegers  ----- */

/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  getAnArrayOfConsecutiveInts
 *  Description:  It must allocate (with malloc()) an array of integers, fill it
 *  			  with consecutive values that begin at startingInteger and end at
 *  			  endingInteger (Including start and end !), then return a pointer
 *  			  to the first value of the array.
 * =================================================================================
 */
int				*getAnArrayOfConsecutiveInts(int startingInteger, int endingInteger)
{
	size_t	lengthOfArrayOfConsecutiveInts;
	int		*arrayOfConsecutiveIntegersPtr;
	
	lengthOfArrayOfConsecutiveInts = getLenOfArrayOfConsecutiveInts(startingInteger,
			endingInteger);
	if(!(arrayOfConsecutiveIntegersPtr = (int *)malloc(sizeof(int) *
					lengthOfArrayOfConsecutiveInts))) {
		return (NULL);
	}
	fillArrayOfConsecutiveIntegers(startingInteger, endingInteger,
			&arrayOfConsecutiveIntegersPtr, lengthOfArrayOfConsecutiveInts);
	return (arrayOfConsecutiveIntegersPtr);
}		/* -----  end of function ft_range  ----- */
