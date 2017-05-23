/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epurStr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 07:55:03 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/22 21:09:30 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/******************************************************
**               funtion prototypes                 ***
*******************************************************/
char *trimStrOneSpaceBetweenWords(char *str);
unsigned int findStrLenForMalloc (char *str);

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  trimStrOneSpaceBetweenWords
 *  Description:  Takes a string, and returns a new string with exactly one
 *  			  space between words, with no spaces or tabs either at the
 *  			  beginning or the end. 
 *
 *  			  A "word" is defined as a part of a string
 *  			  delimited either by spaces/tabs, or by the start/end of the
 *  			  string.
 * =============================================================================
 */
char	*trimStrOneSpaceBetween(char *str) {
	unsigned int	strLen;
	char			*newStr;
	unsigned int	i = 0;

	strLen = findStrLenForMalloc(str);
	newStr = (char *)malloc(sizeof(char) * (strLen + 1));
	while (*str == ' ' || *str == '	') {
		str++;
	}
	while (*str) {
		if (*str != ' ' && *str != '	') {
			newStr[i++] = *str++;
		}
		else if (*str == '	' || *str == ' ') {
			while (*str == ' ' || *str == '	') {
				str++;
			}
			newStr[i++] = ' ';
		}
	}
	newStr[strLen] = '\0';
	return (newStr);
}		/* -----  end of function trimStrOneSpaceBetweenWords  ----- */


/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  findStrLenForMalloc
 *  Description:  Find the string length for malloc.
 * =============================================================================
 */
unsigned int findStrLenForMalloc (char *str) {
	unsigned int	i = 0;
	unsigned int	strLen = 0;

	while (str[i] == ' ' || str[i] == '	') {
		i++;
	}
	while (str[i]) {
		if (str[i] != ' ' && str[i] != '	') {
			strLen++;
			i++;
		}
		else if (str[i] == ' ' || str[i] == '	') {
			while (str[i] == ' ' || str[i] == '	') {
				i++;
			}
			strLen++;
			}
	}
	i--;
	if (str[i] == ' ' || str[i] == '	') {
		strLen--;
	}
	return (strLen);
}		/* -----  end of function findStrLenForMalloc  ----- */
