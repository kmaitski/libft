#include "../../includes/libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	a;
	int	n;

	c = 0;
	a = 0;
	n = 1;
	while ((str[c] < '0' && str[c] != '-') || (str[c] > '9' && str[c] != '-'))
		c++;
	if (str[c] == '-')
	{
		n = -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		a = a * 10 + str[c] - '0';
		c++;
	}
	a = a * n;
	return (a * n);
}
