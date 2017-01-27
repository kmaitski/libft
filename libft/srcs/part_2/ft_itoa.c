/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 18:20:35 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/26 20:16:38 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

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
	int		c;
	size_t	l;
	char	*fr;

	l = int_str_len(n);
	c = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (c < 0)
	{
		c = c * -1;
	}
	fr = ft_strnew(l);
	if (!fr)
		return (NULL);
	l--;
	fr[l] = c % 10 + '0';
	while (c /= 10)
	{
		l--;
		fr[l] = c % 10 + '0';
	}
	if (n < 0)
		fr[0] = '-';
	return (fr);
}
