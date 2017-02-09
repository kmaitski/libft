/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 18:20:35 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 15:34:25 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	int_str_len(int n)
{
	int	c;

	c = 1;
	if (n < 0)
		c++;
	while (n /= 10)
		c++;
	return (c);
}

char		*ft_itoa(int n)
{
	size_t	l;
	char	*fr;

	l = int_str_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(fr = ft_strnew(l)))
		return (NULL);
	if (n < 0)
	{
		fr[0] = '-';
		n = n * -1;
	}
	l--;
	fr[l] = n % 10 + '0';
	while (n /= 10)
	{
		l--;
		fr[l] = n % 10 + '0';
	}
	return (fr);
}
