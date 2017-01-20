/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:56:14 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/20 11:56:17 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	s;
	int	c;

	s = ft_strlen(dest);
	c = 0;
	while (src[c] != '\0')
	{
		dest[s] = src[c];
		s++;
		c++;
	}
	dest[s] = '\0';
	return (dest);
}
