/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:36:13 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/22 23:46:20 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	result;
	int				is_negative;

	result = 0;
	is_negative = 1;
	while (*str > 0 && *str < 33 && *str != '\e')
		str++;
	if (*str == '-')
		is_negative = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str++ - '0';
		if (result > 2147483647 && is_negative == 1)
			return (-1);
		if (result > 2147483648 && is_negative == -1)
			return (0);
		if (result == 2147483648 && is_negative == -1)
			return (-2147483648);
	}
	return ((int)result * is_negative);
}
