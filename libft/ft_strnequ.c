/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 18:11:18 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/03 13:32:08 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (1);
	while (s1[i] == s2[i])
	{
		if ((!s1[i] && !s2[i]) || i == n - 1)
			return (1);
		i++;
	}
	return (0);
}
