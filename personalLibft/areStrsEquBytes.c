/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   areStrsEquBytes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 18:11:18 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/25 21:03:16 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  areStrsEquBytes
 *  Description:  Lexicographical comparison between  the strings pointed to by
 *  			  str1Ptr and str2Ptr up to nbrOfBytes or until a ’\0’ is
 *  			  reached. If the 2 strings are identical, the function returns
 *  			  1, or 0 otherwise.
 * =============================================================================
 */
int	areStrsEquBytes(char const *str1Ptr, char const *str2Ptr, size_t nbrOfBytes)
{
	size_t	i = 0;

	if (!str1Ptr || !str2Ptr) {
		return (0);
	}
	if (!nbrOfBytes) {
		return (1);
	}
	while (str1Ptr[i] == str2Ptr[i])
	{
		if ((!str1Ptr[i] && !str2Ptr[i]) || i == nbrOfBytes - 1) {
			return (1);
		}
		i++;
	}
	return (0);
} 		/* -----  end of function areStrsEquBytes  ----- */
