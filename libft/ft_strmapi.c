/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 16:23:56 by kmaitski          #+#    #+#             */
/*   Updated: 2017/07/19 21:42:52 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_string_ptr;

	i = 0;
	if (!s || !f)
		return (0);
	new_string_ptr = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (new_string_ptr == NULL)
		return (0);
	while (s[i])
	{
		new_string_ptr[i] = f(i, s[i]);
		i++;
	}
	new_string_ptr[i] = '\0';
	return (new_string_ptr);
}
