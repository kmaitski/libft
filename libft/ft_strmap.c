/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 15:46:18 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/22 17:03:45 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		x;

	x = -1;
	if (!s)
		return (NULL);
	if (!(new = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[++x])
		new[x] = f(s[x]);
	new[x] = '\0';
	return (new);
}
