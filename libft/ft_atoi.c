/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:36:13 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/19 23:09:05 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  ftAtoi
 *  Description:  Converts the string argument str to an integer (type int).
 * =============================================================================
 */
int	ft_atoi(const char *STR) {
	int	result;
	int	isNegative;

	result = 0;
	isNegative = 1;
	while (*STR > 0 && *STR < 33 && *STR != '\e')
		STR++;
	if (*STR == '-')
		isNegative = -1;
	if (*STR == '-' || *STR == '+')
		STR++;
	while (*STR >= '0' && *STR <= '9')
	{
		result = result * 10 + *STR++ - '0';
//		if (result < 0)
//			break ;
	}
//	if (result == -2147483648)
//		return (-2147483648);
//	if (result < 0 && isNegative == -1)
//		return (0);
//	if (result < 0 && isNegative == 1)
//		return (-1);
	return (result * isNegative);
}		/* -----  end of function ft_atoi  ----- */
