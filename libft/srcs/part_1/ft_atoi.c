#include "../../includes/libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	a;

	c = 0;
	a = 0;
	while (str[c] < '0' || str[c] > '9')
		c++;
	while (str[c] >= '0' && str[c] <= '9')
	{
		a = a * 10 + str[c] + '0';
		c++;
	}
	return (a);
}
