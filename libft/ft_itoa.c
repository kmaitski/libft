/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 18:20:35 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/21 22:13:28 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	int_len(int n)
{
	unsigned int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	unsigned int	i;
	char			*fresh;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = int_len(n);
	if (!(fresh = ft_strnew(i)))
		return (NULL);
	if (n < 0)
	{
		fresh[0] = '-';
		n *= -1;
	}
	fresh[--i] = n % 10 + '0';
	while (n /= 10)
		fresh[--i] = n % 10 + '0';
	return (fresh);
}
