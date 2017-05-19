/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 09:25:56 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/19 07:57:59 by kmaitski         ###   ########.fr       */
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
	if (c < 128)
		buffer[i++] = (unsigned char)c;
	else if (c < 2048) {
		buffer[0] = (c >> 6 | 0xC0);
		buffer[1] = 0x80 | (c & 0x3F);
		buffer[2] = '\0';
	}
	else if (c < 65536) {
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
//	wchar_t	c = L'ó';
//	wchar_t c = L'ぁ';
	wchar_t c = L'あ';
//	wchar_t c = 'a';
	ft_putchar(c);
}
