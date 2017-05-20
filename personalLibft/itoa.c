/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 18:20:35 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/19 20:57:12 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  intLen
 *  Description:  Calculates the number of digits in the int.
 * =============================================================================
 */
static	int	intLen(int nbr)
{
	unsigned int	i;

	i = 1;
	if (nbr < 0)
		i++;
	while (nbr /= 10)
		i++;
	return (i);
}		/* -----  end of function intLen  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  itoa
 *  Description:  Allocate and returns a “fresh” string representing the integer
 *  			  n given as argument. Negative numbers must be supported. If
 *  			  the allocation fails, the function returns NULL.
 * =============================================================================
 */
char		*itoa(int nbr)
{
	unsigned int	i;
	char			*fresh;

	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	i = intLen(nbr);
	if (!(fresh = ft_strnew(i)))
		return (NULL);
	if (nbr < 0)
	{
		fresh[0] = '-';
		nbr *= -1;
	}
	fresh[--i] = nbr % 10 + '0';
	while (nbr /= 10)
		fresh[--i] = nbr % 10 + '0';
	return (fresh);
}		/* -----  end of function itoa  ----- */
