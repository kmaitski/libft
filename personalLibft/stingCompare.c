/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 10:01:23 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/07 19:51:40 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  stringCompare
 *  Description:  Compares the string pointed to, by string1Ptr to the string
 *  			  pointed to by string2Ptr.
 * =============================================================================
 */	
int	stringCompare(const char *string1Ptr, const char *string2Ptr) {
	size_t	i = 0;

	while (string1Ptr[i] || string2Ptr[i]) {
		if (string1Ptr[i] != string2Ptr[i]) {
			return ((unsigned char)string1Ptr[i] - (unsigned char)string2Ptr[i]);
		i++;
		}
	}
	return (0);
}	/* -----  end of function stringCompare  ----- */
