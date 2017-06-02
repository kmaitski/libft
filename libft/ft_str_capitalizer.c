/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_capitalizer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 10:09:23 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/22 11:42:46 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (i == 0 || str[i - 1] < 33))
			str[i] -= 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i - 1] > 32))
			str[i] += 32;
		i++;
	}
	return (str);
}
