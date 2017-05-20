/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftIsAlNum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:15:27 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/19 20:39:07 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  ftIsAlNum
 *  Description:  Checks if the passed character is alphanumeric.
 * =============================================================================
 */
int	ftIsAlNum(char character) {
	if ((character >= 'a' && character <= 'z') || (character >= 'A' && character
				<= 'Z') || (character >= '0' && character <= '9'))
		return (1);
	else
		return (0);
}		/* -----  end of function ftIsAlNum  ----- */
