/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:35:04 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/19 20:38:17 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  ftIsAlpha
 *  Description:  Checks if the passed character is alphabetic.
 * =============================================================================
 */
int	ftIsAlpha(char character)
{
	if ((character >= 'a' && character <= 'z') || (character >= 'A' && character
				<= 'Z'))
		return (1);
	else
		return (0);
}		/* -----  end of function ftIsAlpha  ----- */
