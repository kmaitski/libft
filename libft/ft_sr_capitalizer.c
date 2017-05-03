/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 10:09:23 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/02 14:41:20 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  ft_str_capitalizer
 *  Description:  Capitalizes the first character of each word (if it's a 
 *				  letter), puts the rest in lowercase.  A "word" is defined as a
 *				  part of a string delimited either by spaces\tabs or by the
 *				  start\end of the string.  If a word only has one letter it
 *				  must be capitalized.
 * =============================================================================
 */

char	*ft_str_capitalizer (char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (i == 0 || str[i - 1] < 33))
			str[i] -= 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i - 1] > 32))
			str[i] += 32;
		i++;
	}
	return (str);
}		/* -----  end of function ft_str_capitalizer  ----- */
