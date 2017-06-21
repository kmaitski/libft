/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 09:39:32 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/20 16:54:37 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  getStringLength
 *  Description:  Computes the length of the string pointed at by stringPtr up
 *  			  to, but not including the terminating null character.
 *
 *  			  Reimplemantation of strlen.
 * =============================================================================
 */
size_t	getStringLength(const char *stringPtr)
{
	size_t	i = 0;
	
	while (stringPtr[i]) {
		i++;
	}
	return (i);
}		/* -----  end of function getStringLength  ----- */
