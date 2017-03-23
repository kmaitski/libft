/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:52:56 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/15 22:43:30 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char		*char_str1;
	const char	*char_str2;
	size_t		i;

	char_str1 = str1;
	char_str2 = str2;
	i = 0;
	while (i < n)
	{
		char_str1[i] = char_str2[i];
		i++;
	}
	return (char_str1);
}
