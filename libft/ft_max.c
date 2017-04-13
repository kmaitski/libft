/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:47:06 by kmaitski          #+#    #+#             */
/*   Updated: 2017/04/12 17:47:07 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_max(int *tab, unsigned int len)
{
	int		max;

	max = -2147483648;
	if (!len || !tab)
		return (0);
	while (len--)
	{
		if (*tab > max)
			max = *tab;
		tab++;
	}
	return (max);
}
