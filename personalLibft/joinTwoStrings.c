/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 19:07:22 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/20 16:09:40 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  joinTwoStrings
 *  Description:  Allocates and returns a “fresh” string ending with ’\0’,
 *  			  result of the concatenation of string1Ptr and string2Ptr. If
 *  			  the allocation fails the function returns NULL.
 * ==============================================================================
 */
char	*joinTwoStrings(char const *string1Ptr, char const *string2Ptr) {
	char	*freshStringPtr;
	int		i = -1;
	size_t	index = 0;

	if (!string1Ptr || !string2Ptr) {
		return (NULL);
	}
	if (!(freshStringPtr = (char *)malloc(sizeof(char) * (getStingLength(string1Ptr) +
						getStringLength(string2Ptr)) + 1)i)) {
		return (NULL);
		}
	while (string1Ptr[++i]) {
		freshStringPtr[i] = string1Ptr[i];
		}
	while (string2Ptr[index]) {
		freshStringPtr[i++] = string2Ptr[index++];
	}
	freshStringPtr[i] = '\0';
	return (freshStringPtr);
}		/* -----  end of function joinTwoStrings  ----- */
