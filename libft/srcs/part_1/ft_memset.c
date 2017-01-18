#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	x;
	char	*s;

	x = 0;
	s = str;
	while (x < n)
	{
		s[x] = c;
		x++;
	}
	return (s);
}
