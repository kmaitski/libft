/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 09:00:56 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/06 18:56:48 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  writeStringToFileDescriptor
 *  Description:  Outputs the string pointed at by stringPtr to a
 *  			  fileDescriptor.
 * =============================================================================
 */
void	writeStringToFileDescriptor(char const *stringPtr, int fileDescriptor)
{
	if (!stringPtr) {
		return ;
	}
	while (*stringPtr) {
		writeCharacterToFileDescriptor(*stringPtr++, fileDescriptor);
	}
}		/* -----  end of function writeStringToFileDescriptor  ----- */
