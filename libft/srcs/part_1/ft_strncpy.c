#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n)
	{
		dest[c] = src[c];
		c++;
	
	}
	dest[c] = '\0';
	return (dest);
}
