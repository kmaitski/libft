/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:17:39 by kmaitski          #+#    #+#             */
/*   Updated: 2017/07/19 21:40:19 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_string_ptr;
	int		i;

	if (!(new_string_ptr = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = -1;
	while (s[++i])
		new_string_ptr[i] = s[i];
	return (new_string_ptr);
}
