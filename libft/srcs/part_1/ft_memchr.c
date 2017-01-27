/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:53:22 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/27 11:36:15 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

const void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		co;
	char const	*ne;
	int		f;

	co = 0;
	f = 0;
	ne = str;
	while (co < n)
	{
		if (ne[co] == c)
		{
			f = 1;
			break ;
		}
		co++;
	}
	if (f == 1)
		ne = &str[co];
	else
		ne = NULL;
	return (ne);
}
