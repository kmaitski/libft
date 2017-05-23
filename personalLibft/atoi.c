/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:36:13 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/22 20:25:47 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  ftAtoi
 *  Description:  Converts the string argument str to an integer (type int).
 * =============================================================================
 */
int	ftAtoi(const char *STR) {
	int	result;
	int	negativeNbr;

	result = 0;
	negativeNbr = 1;
	while (*STR < 33 && *STR != '\e') {
		STR++;
	}
	if (*STR == '-') {
		negativeNbr = -1;
	}
	if (*STR == '-' || *STR == '+') {
		STR++;
	}
	while (*STR >= '0' && *STR <= '9') {
		result = result * 10 + *STR++ - '0';
	}
	if (result == -2147483648) {
		return (-2147483648);
	}
	return (result * negativeNbr);
}		/* -----  end of function ftAtoi  ----- */
