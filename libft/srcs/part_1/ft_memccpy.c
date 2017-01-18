#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		co;
	char		*d;
	const char	*s;

	co = 0;
	d = dest;
	s = src;
	while (co < n)
	{
		if (s[co] == c)
			break ;
		d[co] = s[co];
		co++;
	}
	return (d);
}
