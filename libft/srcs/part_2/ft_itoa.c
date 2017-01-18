/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 18:20:35 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/11 18:48:19 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_str_len(int n);

char		*ft_itoa(int n)
{
	int		c;
	size_t	l;
	char	*fr;

	l = int_str_len(n);
	c = n;
	if (c < 0)
	{
		c = c * -1;
		l++;
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

static int	int_str_len(int n)
{
	int	c;

	c = 1;
	while (n /= 10)
		c++;
	return (c);
}
