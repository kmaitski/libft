/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 16:23:56 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/10 11:49:32 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	i = -1;
	if (!s || !f)
		return (0);
	new = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (new == NULL)
		return (0);
	while (s[++i])
		new[i] = f(i, s[i]);
	new[i] = '\0';
	return (new);
}
