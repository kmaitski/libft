#include "../../includes/libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	a;
	int	n;

	c = 0;
	a = 0;
	n = 1;
	while (str[c] > 0 && str[c] < 33 && str[c] != '\e')
		c++;
	if (str[c] == '-')
		n = -1;
	if (str[c] == '-' || str[c] == '+')
		c++;
	while (str[c] >= '0' && str[c] <= '9')
	{
		a = a * 10 + str[c] - '0';
		c++;
	}
	return (a * n);
}
