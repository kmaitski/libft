/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 08:14:04 by kmaitski          #+#    #+#             */
/*   Updated: 2017/04/13 08:26:03 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_hex(unsigned int nbr)
{
	int	hex[16] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'a', 'b', 'c', 'd', 'e',
		'f' };
	int	i;

	while (nbr)
	{
		i = nbr % 16;
		if (i < 10)
			ft_putchar(hex[i] + '0');
		else
			ft_putchar(hex[i]);
		nbr /= 16;
	}
}