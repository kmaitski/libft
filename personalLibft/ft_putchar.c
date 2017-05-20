/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 09:25:56 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/19 21:48:46 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned char	*wcharToUtf8(wchar_t c)
{
	int	i;
	unsigned char *buffer;

	i = 0;
	buffer = (unsigned char *)malloc(sizeof(char) * 4);
	if (c <= 0x7F) {
		buffer[1] = '\0';
		buffer[0] = (unsigned char)c;
	}
	else if (c <= 0x7FF) {
		buffer[2] = '\0';
		buffer[1] = 0x80 | (c & 0x3F);
		c = c >> 6;
		buffer[0] = c | 0xC0;
	}
	else if (c <= 0xFFFF) {
		buffer[3] = '\0';
		buffer[2] = 0x80 | (c & 0x3F);
		c = c >> 6;
		buffer[1] = 0x80 | (c & 0x3F);
		c = c >> 6;
		buffer[0] = 0xE0 | c;
	}
	else {
		buffer[4] = '\0';
		buffer[3] = 0x80 | (c & 0x3F);
		c = c >> 6;
		buffer[2] = 0x80 | (c & 0x3F);
		c = c >> 6;
		buffer[1] = 0x80 | (c & 0x3F);
		c = c >> 6;
		buffer[0] = 0xF0 | c;
	}
	return (buffer);
}

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  ft_putchar
 *  Description:  Outputs the character c to the standard output.
 * =============================================================================
 */
void	ft_putchar(wchar_t c)
{
	int	i;
	unsigned char	*buffer;

	buffer = wcharToUtf8(c);
	i = 0;
	while (buffer[i])
	{
		write(1, &buffer[i], 1);
		i++;
	}
//	write(1, &c, 1);
} 		/* -----  end of function ft_putchar  ----- */

int	main(void)
{
//	wchar_t c = 'a';
//	wchar_t c = 'b';
//	wchar_t	c = L'ó';
//	wchar_t c = L'Ԃ';
//	wchar_t c = L'ぁ';
//	wchar_t c = L'あ';
//	wchar_t c = L'𠜎';
//	wchar_t c = L'⤀';
//	wchar_t c = L'⤨';
//	wchar_t c = L'𐆒';
	wchar_t c = L'𐆚';
	ft_putchar(c);
	ft_putchar(' ');
}
