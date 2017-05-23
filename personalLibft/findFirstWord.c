/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstWord.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:46:35 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/22 21:27:48 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  findFirstWord.c
 *  Description:  Takes a string and returns its first word. A word is a
 *  			  section of string delimited by spaces/tabs or by the start/end
 *  			  of the string.
 * =============================================================================
 */
char	*findFirstWord(char *str) {
	unsigned int	i = 0;
	unsigned int	wordLen;

	while (str[i] < 33 && str[i]) {
		i++;
	}
	if (!str[i]) {
		return (NULL);
	}
	while (str[i] > 32 && str[i]) {
		i++;
		wordLen++;
	}
	return (ft_strsub(str, i, wordLen));
}		/* -----  end of function findFirstWord.c  ----- */
