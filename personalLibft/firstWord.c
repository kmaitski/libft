/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstWord.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:46:35 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/19 20:26:16 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  firstWord.c
 *  Description:  Takes a string and returns its first word. A word is a
 *  			  section of string delimited by spaces/tabs or by the start/end
 *  			  of the string.
 * =============================================================================
 */
char	*firstWord(char *str)
{
	unsigned int	i;
	unsigned int	index;

	i = 0;
	while (str[i] < 33 && str[i])
		i++;
	if (!str[i])
		return (NULL);
	index = i;
	while (str[index] > 32 && str[index])
		index++;
	return (ft_strsub(str, i, index - i));
}		/* -----  end of function firstWord.c  ----- */
