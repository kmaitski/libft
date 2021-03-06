/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 09:25:56 by kmaitski          #+#    #+#             */
/*   Updated: 2017/07/19 21:33:43 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	*three_and_4_bytes_buffer(wchar_t c)
{
	unsigned char *buffer;

	buffer = (unsigned char *)malloc(sizeof(char) * 5);
	if (c <= 0xFFFF)
	{
		buffer[3] = '\0';
		buffer[2] = 0x80 | (c & 0x3F);
		c = c >> 6;
		buffer[1] = 0x80 | (c & 0x3F);
		c = c >> 6;
		buffer[0] = 0xE0 | c;
	}
	else
	{
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

unsigned char	*wchar_to_utf_8(wchar_t c)
{
	unsigned char *buffer;

	buffer = (unsigned char *)malloc(sizeof(char) * 3);
	if (c <= 0x7FF)
	{
		buffer[2] = '\0';
		buffer[1] = 0x80 | (c & 0x3F);
		c = c >> 6;
		buffer[0] = 0xC0 | c;
	}
	else
	{
		free(buffer);
		buffer = three_and_4_bytes_buffer(c);
	}
	return (buffer);
}

void			ft_putchar(wchar_t c)
{
	int				i;
	unsigned char	*buffer;
	char			ascii;

	if (c <= 0x7F)
	{
		ascii = (char)c;
		write(1, &ascii, 1);
	}
	else
	{
		buffer = wchar_to_utf_8(c);
		i = 0;
		while (buffer[i])
		{
			write(1, &buffer[i], 1);
			i++;
		}
	free(buffer);
	}
}
