#include "libft.h"

const void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		co;
	char const	*ne;
	int		f;

	co = 0;
	f = 0;
	ne = str;
	while (co < n)
	{
		if (ne[co] == c)
		{
			f = 1;
			break ;
		}
		co++;
	}
	if (f == 1)
		ne = &str[co];
	else
		ne = str;
	return (ne);
}
