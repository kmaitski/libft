/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 15:46:18 by kmaitski          #+#    #+#             */
/*   Updated: 2017/07/19 21:42:09 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_string_ptr;
	int		i;

	i = -1;
	if (!s)
		return (NULL);
	if (!(new_string_ptr = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[++i])
		new_string_ptr[i] = f(s[i]);
	new_string_ptr[i] = '\0';
	return (new_string_ptr);
}
