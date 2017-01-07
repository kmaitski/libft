/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 18:11:18 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/06 14:50:53 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	x;

	x = 0;
	if (!s1 || !s2 || !n)
		return (0);
	while (s1[x] == s2[x])
	{
		if ((s1[x] == '\0' && s2[x] == '\0') || x == n)
			return (1);
		x++;
	}
	return (0);
}
