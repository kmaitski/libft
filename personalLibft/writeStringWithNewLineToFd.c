/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 09:05:17 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/06 18:11:42 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  writeStringWithNewLineToFd
 *  Description:  Outputs the string pointed at by stingPtr to a fileDescriptor
 *  			  followed by a ’\n’.
 * =============================================================================
 */
void	writeStringWithNewLineToFd(char const *stringPtr, int fileDescriptor) {
	if (!stringPtr) {
		return ;
	}
	while (*stringPtr) {
		writeCharacterToFileDescriptor(*stringPtr++, fileDescriptor);
	}
	writeCharacterToFileDescriptor('\n', fileDescriptor);
}		/* -----  end of function writeStringWithNewLineToFd  ----- */
