/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:55:51 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 19:57:10 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	char	*s;
	int	x;

	s = str;
	x = 0;
	while (n--)
	{
		s[x] = c;
		x++;
	}
	return (s);
}
