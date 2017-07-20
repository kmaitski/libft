/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 18:27:54 by kmaitski          #+#    #+#             */
/*   Updated: 2017/07/19 21:45:45 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_string_ptr;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(new_string_ptr = (char *)malloc(len + 1)))
		return (NULL);
	i = 0;
	while (i < len)
		new_string_ptr[i++] = s[start++];
	new_string_ptr[i] = '\0';
	return (new_string_ptr);
}
