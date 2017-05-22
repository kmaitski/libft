/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 09:25:56 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/22 07:39:36 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned char	*threeAnd4BytesBufferFd(wchar_t c)
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


unsigned char	*wcharToUtf8Fd(wchar_t c)
{
	unsigned char *buffer;

	buffer = (unsigned char *)malloc(sizeof(char) * 3);
	if (c <= 0x7F)
	{
		buffer[1] = '\0';
		buffer[0] = (unsigned char)c;
	}
	else if (c <= 0x7FF)
	{
		buffer[2] = '\0';
		buffer[1] = 0x80 | (c & 0x3F);
		c = c >> 6;
		buffer[0] = c | 0xC0;
	}
	else
		buffer = threeAnd4BytesBufferFd(c);
	return (buffer);
}

void	ft_putchar_fd(wchar_t c, int fd)
{
	int	i;
	unsigned char	*buffer;

	buffer = wcharToUtf8Fd(c);
	i = 0;
	while (buffer[i])
	{
		write(fd, &buffer[i], 1);
		i++;
	}
}
