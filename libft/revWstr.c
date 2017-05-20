/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revWstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 16:20:37 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/19 22:02:35 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <unistd.h>

/******************************************************
**               funtion prototypes                 ***
*******************************************************/
char *revWstr (char *str);

/* 
 * ===  FUNCTION  ================================================================
 *         Name:  revWstr
 *  Description:  Returns a strings words in reverse order.
 * ===============================================================================
 */
char	*revWstr(char *str) {
	int	strLen = 0;
	size_t	wordLen = 0;
	char	*revStr;
	size_t	i = 0;

	while (str[strLen])
		strLen++;
	revStr = (char *)malloc(sizeof(char) * (strLen + 1));
	while (strLen >= 0) {
		if (str[strLen] == ' ' || str[strLen] == '	') {
			wordLen = strLen + 1;
			while (str[wordLen] && str[wordLen] != ' ' && str[wordLen] != '	')
				revStr[i++] = str[wordLen++];
			revStr[i++] = ' ';
		}
		if (strLen == 0) {
			wordLen = strLen;
			while (str[wordLen] && str[wordLen] != ' ' && str[wordLen] != '	')
				revStr[i++] = str[wordLen++];
		}
		strLen--;
	}
	revStr[i] = '\0';
	i = 0;
	return (revStr);
}		/* -----  end of function revWstr  ----- */
