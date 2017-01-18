#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t	x;
	char	*str;

	str = s;
	x = 0;
	while (x < n)
	{
		str[x] = 0;
		x++;
	}
	return (str);
}
