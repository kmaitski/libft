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
