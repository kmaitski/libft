/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:36:13 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/07 22:29:57 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overflow(const char *str)
{
	int		length;
	int 	string_compare_result;
	size_t	i;

	length = 0;
	string_compare_result = 0;
	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			length++;
		i++;
	}
	if (length > 18)
		string_compare_result = ft_strcmp(str, "9223372036854775807");
	if (string_compare_result >= 0)
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	unsigned int	result;
	int				is_negative;
	int				too_big;

	result = 0;
	is_negative = 1;
	while (*str > 0 && *str < 33 && *str != '\e')
		str++;
	if (*str == '-')
		is_negative = -1;
	if (*str == '-' || *str == '+')
		str++;
	too_big = overflow(str);
	if (too_big && is_negative == 1)
		return (-1);
	if (too_big  && is_negative == -1)
		return (0);
	while (*str >= '0' && *str <= '9')
		result = result * 10 + *str++ - '0';
	if (result == 2147483648 && is_negative == -1)
		return (-2147483648);
	return ((int)result * is_negative);
}
