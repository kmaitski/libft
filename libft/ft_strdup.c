/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:17:39 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/15 23:08:10 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;

	if (!(new = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = -1;
	while (s[++i])
		new[i] = s[i];
	return (new);
}
