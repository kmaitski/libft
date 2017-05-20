/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_epur_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 07:55:03 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/19 19:52:59 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/******************************************************
**               funtion prototypes                 ***
*******************************************************/
char *epurStr(char *str);
unsigned int findStrLenForMalloc (char *str);

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  epurStr
 *  Description:  Takes a string, and returns a new string with exactly one
 *  			  space between words, with no spaces or tabs either at the
 *  			  beginning or the end. 
 *
 *  			  A "word" is defined as a part of a string
 *  			  delimited either by spaces/tabs, or by the start/end of the string.
 * =====================================================================================
 */
char	*epurStr(char *str) {
	unsigned int	strLen;
	char			*newStr;
	unsigned int	i;	

	strLen = findStrLenForMalloc(str);
	newStr = (char *)malloc(sizeof(char) * (strLen + 1));
	i = 0;
	while (*str == ' ' || *str == '	')
		str++;
	while (*str) {
		if (*str != ' ' && *str != '	')
			newStr[i++] = *str++;
		else if (*str == '	' || *str == ' ') {
			while (*str == ' ' || *str == '	')
				str++;
			newStr[i++] = ' ';
		}
	}
	newStr[strLen] = '\0';
	return (newStr);
}		/* -----  end of function ft_epur_str  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  findStrLenForMalloc
 *  Description:  Find the string length for malloc.
 * =====================================================================================
 */
unsigned int findStrLenForMalloc (char *str) {
	unsigned int	i;
	unsigned int	strLen;

	i = 0;
	strLen = 0;
	while (str[i] == ' ' || str[i] == '	')
		i++;
	while (str[i]) {
		if (str[i] != ' ' && str[i] != '	') {
			strLen++;
			i++;
		}
		else if (str[i] == ' ' || str[i] == '	') {
			while (str[i] == ' ' || str[i] == '	')
				i++;
			strLen++;
			}
	}
	i--;
	if (str[i] == ' ' || str[i] == '	')
		strLen--;
	return (strLen);
}		/* -----  end of function findStrLenForMalloc  ----- */
