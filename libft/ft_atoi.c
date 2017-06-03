/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:36:13 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/02 19:22:16 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	atoi_length(const char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		if (ft_isdigit(*str))
				length++;
		str++;
	}
	return (length);
}

int	ft_atoi(const char *str)
{
	unsigned int	result;
	int				is_negative;
	int				length;

	result = 0;
	is_negative = 1;
	while (*str > 0 && *str < 33 && *str != '\e')
		str++;
	if (*str == '-')
		is_negative = -1;
	if (*str == '-' || *str == '+')
		str++;
	length = atoi_length(str);
	if (length > 18 && is_negative == 1)
		return (-1);
	if (length > 18 && is_negative == -1)
		return (0);
	while (*str >= '0' && *str <= '9')
		result = result * 10 + *str++ - '0';
	if (result == 2147483648 && is_negative == -1)
		return (-2147483648);
	return ((int)result * is_negative);
}
