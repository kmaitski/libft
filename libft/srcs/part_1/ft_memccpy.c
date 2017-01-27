#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		co;
	char		*d;
	char		*s;

	co = 0;
	d = (char *)dest;
	s = (char *)src;
	if (dest == src || n == 0)
		return (dest);
	co = 0;
	while (co < n)
	{
		d[co] = s[co];
		if (d[co] == c)
			return (d + co + 1);
		co++;
	}
	return (NULL);
}
