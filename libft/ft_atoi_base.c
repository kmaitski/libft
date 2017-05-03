/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 10:14:48 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/02 14:04:44 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/******************************************************
**               funtion prototypes                 ***
*******************************************************/
int ft_atoi_base(const char *str, int str_base);
static int *intialize_hex_array(void);
static int get_value(char c, int str_base);
static unsigned int get_result(const char *str, int str_base);

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  intialize_hex_array
 *  Description:  Intializes the hex_array for use.
 * =============================================================================
 */
static int			*intialize_hex_array(void)
{
	unsigned int		i;
	char				c;
	int					hex_array[16];
	int					*return_array;

	i = 0;
	c = 'a';
	while (i < 10)
	{
		hex_array[i] = i;
		i++;
	}
	while (i < 16)
		hex_array[i++] = c++;
	return_array = hex_array;
	return (return_array);
}		/* -----  end of function intialize_hex_array  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  get_value
 *  Description:  Returns the value for one spot on the string.
 * =============================================================================
 */
static int			get_value(char c, int str_base)
{
	int	i;
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
}		/* -----  end of function get_value  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  get_result
 *  Description:  Get the result for ft_atoi_base
 * =============================================================================
 */
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
}		/* -----  end of function get_result  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  ft_atoi_base
 *  Description:  function that converts the string argument str (base N <= 16)
 *  			  to an integer (base 10) and returns it.
 *
 *				  The characters recognized in the input are: 0123456789abcdef.
 *				  Those are, of course, to be trimmed according to the requested
 *				  base. For example, base 4 recognizes "0123" and base 16
 *				  recognizes "0123456789abcdef".
 *
 *  			  Uppercase letters must also be recognized: "12fdb3" is the
 *  			  same as "12FDB3".
 *
 *  			  Minus signs ('-') are interpreted only if they are the first
 *  			  character of the string.
 * =====================================================================================
 */

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
}		/* -----  end of function ft_atoi_base  ----- */
