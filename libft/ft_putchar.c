/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 09:25:56 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/17 20:46:59 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned char	*wcharToUtf8(wchar_t c, unsigned char *buffer)
{
	int	i;

	i = 0;
	if (c < 128)
		buffer[i++] = (unsigned char)c;
	else if (c < 2048)
	{
		buffer[i++] = (c >> 6 | 0xC0);
		buffer[i++] = (c >> 2 | 0xC0);

	}
	buffer[i] = '\0';
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
	unsigned char	*buffer;
	int	i;

	buffer = wcharToUtf8(c, buffer);
	i = 0;
	while (buffer[i])
	{
		write(1, &buffer[i], 1);
		i++;
	}
	write(1, &c, 1);
} 		/* -----  end of function ft_putchar  ----- */

int	main(void)
{
	wchar_t	c = L'ó';
//	wchar_t c = 'a';
	ft_putchar(c);
}
