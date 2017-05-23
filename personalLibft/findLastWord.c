/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:46:53 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/22 21:31:11 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  findLastWord
 *  Description:  Takes a string and returns a pointer to its last word. A word
 *  			  is a section of string delimited by spaces/tabs or by the
 *  			  start/end of the string.
 * =============================================================================
 */
char	*findLastWord(char *str) {
	unsigned int	i;
	unsigned int	wordLen = 0;

	i = ft_strlen(str);
	while (str[i] < 33 && i) {
		i--;
	}
	if (!i) {
		return (NULL);
	}
	str[++i] = '\0';
	while (str[--i] > 32 && i) {
		i--;
		wordLen++;
	}
	return (ft_strsub(str, ++i, wordLen));
}		/* -----  end of function findLastWord  ----- */
