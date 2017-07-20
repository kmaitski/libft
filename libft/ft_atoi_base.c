/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 10:14:48 by kmaitski          #+#    #+#             */
/*   Updated: 2017/07/19 17:14:58 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			*intialize_hex_array(void)
{
	unsigned int		i;
	char				hex_letters;
	int					hex_array[16];
	int					*return_array;

	i = 0;
	hex_letters = 'a';
	while (i < 10)
	{
		hex_array[i] = i;
		i++;
	}
	while (i < 16)
		hex_array[i++] = hex_letters++;
	return_array = hex_array;
	return (return_array);
}

static int			get_value(char c, int str_base)
{
	int			i;
	static int	*hex = NULL;

	if (!hex)
		hex = intialize_hex_array();
	i = 9;
	if (c >= 'A' && c <= 'F')
		c += 32;
	if (c >= '0' && c <= '9')
	{
		c -= '0';
		return (c);
	}
	else
	{
		while (++i <= str_base)
			if (c == hex[i])
				return (i);
	}
	return (-1);
}

static unsigned int	get_result(const char *str, int str_base)
{
	unsigned int	i;
	int				value;
	unsigned int	result;

	i = 0;
	result = 0;
	while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f')
		|| (str[i] >= 'A' && str[i] <= 'F'))
	{
		value = get_value(str[i], str_base);
		if (value < 0)
			return (result);
		result = result * str_base + value;
		i++;
	}
	return (result);
}

int					ft_atoi_base(const char *str, int str_base)
{
	int	is_negative;

	is_negative = 1;
	while (*str < 33 || *str == 127)
		str++;
	if (*str == '-')
		is_negative = -1;
	if (*str == '-' || *str == '+')
		str++;
	return (get_result(&*str, str_base) * is_negative);
}
