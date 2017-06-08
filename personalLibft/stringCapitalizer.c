/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_capitalizer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 10:09:23 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/07 19:23:58 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  stringCapitalizer
 *  Description:  Capitalizes the first character of each word (if it's a 
 *				  letter), puts the rest in lowercase.  A "word" is defined as a
 *				  part of a string delimited either by spaces\tabs or by the
 *				  start\end of the string.  If a word only has one letter it
 *				  must be capitalized.
 * =============================================================================
 */

char	*stringCapitalizer (char *stringPtr) {
	int	i;

	i = 0;
	while (stringPtr[i]) {
		if ((stringPtr[i] >= 'a' && stringPtr[i] <= 'z') && (i == 0 ||
					stringPtr[i - 1] < 33)) {
			stringPtr[i] -= 32;
		}
		else if ((stringPtr[i] >= 'A' && stringPtr[i] <= 'Z') &&
				(stringPtr[i - 1] > 32)) {
			stringPtr[i] += 32;
		}
		i++;
	}
	return (stringPtr);
}		/* -----  end of function stringCapitalizer  ----- */
