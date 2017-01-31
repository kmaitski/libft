/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:55:19 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/20 11:55:31 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		c;
	char		*des;
	const char	*sr;

	c = 0;
	des = dest;
	sr = src;
	if (sr < des)
	{
		while (n--)
			des[n] = sr[n];
	}
	else
		ft_memcpy(des, sr, n);
	return (des);
}
