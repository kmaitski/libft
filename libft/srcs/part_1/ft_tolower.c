#include "../../includes/libft.h"

int	ft_tolower(int c)
{
	int	a;

	a = 0;
	if (ft_isalpha(c) == 1)
	{
		a = c + 32;
		return (a);
	}
	else
		return (c);
}

