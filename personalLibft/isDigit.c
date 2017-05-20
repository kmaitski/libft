/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 12:47:37 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/19 20:46:27 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  ftIsDigit
 *  Description:  Checks if the passed character is a decimal digit character.
 *  			  Decimal digits are (numbers) − 0 1 2 3 4 5 6 7 8 9.
 * =============================================================================
 */
int	ftIsDigit(char character)
{
	if (character >= '0' && character <= '9')
		return (1);
	else
		return (0);
}		/* -----  end of function ftIsDigit  ----- */
