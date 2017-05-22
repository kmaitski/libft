/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 12:46:09 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/22 08:05:06 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	str_len;

	str_len = ft_strlen(str);
	while (str_len && str[str_len] != c)
		str_len--;
	if (str[str_len] == c)
		return ((char *)&str[str_len]);
	return (NULL);
}
