/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:47:40 by kmaitski          #+#    #+#             */
/*   Updated: 2017/04/12 17:47:42 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_do_op(int number1, char sign, int number2)
{
	if (sign == '+')
		return (number1 + number2);
	if (sign == '-')
		return (number1 - number2);
	if (sign == '*')
		return (number1 * number2);
	if (sign == '/')
		return (number1 / number2);
	if (sign == '%')
		return (number1 % number2);
	else
		return (0);
}
