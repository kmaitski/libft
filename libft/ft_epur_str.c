/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_epur_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 07:55:03 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/21 22:08:36 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	find_str_len_for_malloc(char *str)
{
	unsigned int	i;
	unsigned int	str_len;

	i = 0;
	str_len = 0;
	while (str[i] == ' ' || str[i] == '	')
		i++;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '	')
		{
			str_len++;
			i++;
		}
		else if (str[i] == ' ' || str[i] == '	')
		{
			while (str[i] == ' ' || str[i] == '	')
				i++;
			str_len++;
		}
	}
	i--;
	if (str[i] == ' ' || str[i] == '	')
		str_len--;
	return (str_len);
}

char			*epur_str(char *str)
{
	unsigned int	str_len;
	char			*new_str;
	unsigned int	i;

	str_len = find_str_len_for_malloc(str);
	new_str = (char *)malloc(sizeof(char) * (str_len + 1));
	i = 0;
	while (*str == ' ' || *str == '	')
		str++;
	while (*str)
	{
		if (*str != ' ' && *str != '	')
			new_str[i++] = *str++;
		else if (*str == '	' || *str == ' ')
		{
			while (*str == ' ' || *str == '	')
				str++;
			new_str[i++] = ' ';
		}
	}
	new_str[str_len] = '\0';
	return (new_str);
}
