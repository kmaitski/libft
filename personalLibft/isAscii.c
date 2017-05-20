/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:17:23 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/19 20:41:18 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  ftIsAscii
 *  Description:  Tests if a given character, in the current locale, can be
 *  			  represented as a valid 7–bit US-ASCII character.
 * =============================================================================
 */
int	ftIsAscii(char character)
{
	if (character >= 0 && character <= 127)
		return (1);
	else
		return (0);
}		/* -----  end of function ftIsAscii  ----- */
