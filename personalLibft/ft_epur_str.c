/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_epur_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 07:55:03 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/18 21:14:08 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  epurStr
 *  Description:  Takes a string, and returns this string with exactly one
 *  			  space between words, with no spaces or tabs either at the
 *  			  beginning or the end. 
 *
 *  			  A "word" is defined as a part of a string
 *  			  delimited either by spaces/tabs, or by the start/end of the string.
 * =====================================================================================
 */
char	*epurStr(char *str)
{
	unsigned int	i;
	char			*returnStr;

	i = 0;
	while (str[i] == ' ' || str[i] == '	')
		i++;
	while (str[i])
	{
		if (str[i] > 32 || (str[i] < 33 && str[i + 1] > 32))
			write(1, &str[i], 1);
		i++;
	}
	return (str);
}		/* -----  end of function ft_epur_str  ----- */
