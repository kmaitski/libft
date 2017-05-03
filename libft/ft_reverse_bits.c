/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_bits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 15:57:07 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/02 16:39:03 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	ft_reverse_bits(wchar_t octet)
{
	unsigned char	result;
	unsigned int	bits;
	unsigned int	byte;

	result = 0;
	bits = 8;
	byte = 128;
	while (bits--)
	{
		result = result + (octet % 2) * byte;
		byte /= 2;
		octet >>=1;
	}
	return (result);
}
