/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:45:53 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/06 19:39:47 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  printReverseString
 *  Description:  Takes a string, and outputs the string in reverse on the
 *  			  standard output.
 * =============================================================================
 */
void	printReverseString(char *stringPtr)
{
	size_t	i;

	i = getStringLength(stringPtr);
	while (i--)
		write(1, &stringPtr[i], 1);
}		/* -----  end of function printReverseString  ----- */
