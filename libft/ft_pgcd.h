/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 08:09:48 by kmaitski          #+#    #+#             */
/*   Updated: 2017/04/13 08:13:16 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pgcd(unsigned int nbr1, unsigned int nbr2)
{
	int	denominator;
	int	highest_denominator;

	denominator = 1;
	highest_denominator = 0;
	while (denominator <= nbr1 && denominator <= nbr2)
	{
		if (!(int1 % denominator) && !(int2 % denominator))
			highest_denominator = denominator;
		denominator++;
	}
	return (highest_denominator);
}
