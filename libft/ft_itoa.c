/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 18:20:35 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/23 17:54:07 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	int_str_len(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	size_t	i;
	char	*fresh;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = int_str_len(n);
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
