#include "../../includes/libft.h"

int	ft_tolower(int c)
{
	int	a;

	a = 0;
	if (c >= 'A' && c <= 'Z')
	{
		a = c + 32;
		return (a);
	}
	else
		return (c);
}

