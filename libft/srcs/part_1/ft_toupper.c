#include "../../includes/libft.h"

int	ft_toupper(int c)
{
	int	a;

	a = 0;
	if (c >= 'a' && c <= 'z')
	{
		a = c - 32;
		return (a);
	}
	else
		return (c);
}
