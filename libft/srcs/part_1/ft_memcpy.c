#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t		c;
	char		*s1;
	const char	*s2;

	c = 0;
	s1 = str1;
	s2 = str2;
	while (c < n)
	{
		s1[c] = s2[c];
		c++;
	}
	return (s1);
}
