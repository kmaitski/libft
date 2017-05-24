/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:47:06 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/23 22:24:43 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  getMaxValue
 *  Description:  Returns the largest number found in the array pointed to by
 *  			  arrayOfInts.
 * =============================================================================
 */
int	getMaxValue(int *arrayOfInts, unsigned int len) {
	int		maxValue;

	maxValue = -2147483648;
	if (!len || !arrayOfInts) {
		return (0);
	}
	while (len--) {
		if (*arrayOfInts > maxValue) {
			maxValue = *arrayOfInts;
		}
		arrayOfInts++;
	}
	return (maxValue);
}		/* -----  end of function getMaxValue  ----- */
