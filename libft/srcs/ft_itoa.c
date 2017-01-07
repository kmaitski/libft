/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 22:01:25 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/06 08:42:30 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*number_string(char *str, int n, int counter);

char	*ft_itoa(int n)
{
	char	*str;
	int		x;
	int		y;

	x = n;
	y = 0;
	while (n > 1)
	{
		n = n / 10;
		y++;
	}
	str = malloc(y + 1);
	y = 0;
	return (number_string(str, n, y));
}

char	*number_string(char *str, int n, int counter)
{
	if (n < 10)
	{
		str[counter] = n;
		counter++;
	}
	if (n > 10)
	{
		n = n / 10;
		number_string(str, n, counter);
	}
	str[counter] = '\0';
	return (str);
}
