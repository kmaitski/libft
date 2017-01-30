#include "../../includes/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	c;
	size_t	x;

	c = 0;
	while (dest[c] != '\0' && c < n)
		c++;
	x = c;
	while (src[c-x] != '\0' && c < n - 1)
	{
		dest[c] = src[c-x];
		c++;
	}
	if (x < n)
		dest[c] = '\0';
	return (x + ft_strlen(src));
}
