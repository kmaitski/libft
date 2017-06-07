/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 08:55:41 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/02 16:46:33 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  writeChararcterToFileDescriptor
 *  Description:  Outputs character to fileDescriptor.
 * =============================================================================
 */
void	writeCharacterToFileDescriptor(char character, int fileDescriptor) {
	write(fileDescriptor, &character, 1);
}		/* -----  end of function writeCharacterToFileDescriptor  ----- */
