/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 18:19:36 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/15 21:03:49 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_before(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}

static	size_t	count_after(char const *s)
{
	int		length;
	size_t	i;

	i = 0;
	length = ft_strlen(s);
	length--;
	while ((s[length] == ' ' || s[length] == '\n' || s[length] == '\t')
				&& length > 0)
	{
		length--;
		i++;
	}
	return (i);
}

char			*ft_strtrim(char const *s)
{
	size_t		length;
	char		*copy;
	size_t		spaces_before;
	size_t		i;

	if (!s)
		return (NULL);
	spaces_before = count_before(s);
	if ((spaces_before + count_after(s)) >= ft_strlen(s))
		length = 0;
	else
		length = ft_strlen(s) - spaces_before - count_after(s);
	if (!(copy = ft_strnew(length)))
		return (NULL);
	i = 0;
	while (i < length)
		copy[i++] = s[spaces_before++];
	return (copy);
}
