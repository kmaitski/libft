/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:57:12 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/07 20:12:34 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  areStringsEqual
 *  Description:  Lexicographical comparison between string1Ptr and string2Ptr.
 *  			  If the 2 strings are identical the function returns 1, or 0
 *  			  otherwise.
 * =============================================================================
 */
int	areStringsEqual(char const *string1Ptr, char const *string2Ptr) {
	size_t	i = 0;

	if (!string1Ptr || !string2Ptr) {
		return (0);
	}
	while (string1Ptr[i] == string2Ptr[i]) {
		if (!string1Ptr[i] && !string2Ptr[i]) {
			return (1);
		}
		i++;
	}
	return (0);
}	  /* -----  end of function areStringsEqual  ----- */
