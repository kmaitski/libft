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

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	x;
	char	*s;

	x = 0;
	s = str;
	while (x < n)
	{
		s[x] = c;
		x++;
	}
	str = s;
	return (str);
}
