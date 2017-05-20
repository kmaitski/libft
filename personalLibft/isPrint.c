/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:35:56 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/19 20:49:01 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  ftIsprint
 *  Description:  Checks whether the passed character is printable. A printable
 *  			  character is a character that is not a control character.
 * =============================================================================
 */
int	ftIsPrint(char character)
{
	if (character >= 32 && character <= 126)
		return (1);
	else
		return (0);
}		/* -----  end of function ftIsPrint  ----- */
