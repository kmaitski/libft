#include "../../includes/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	c;
	size_t	x;

	c = 0;
	x = 0;
	while (dest[c] != '\0' && c < n)
		c++;
	while (src[x] != '\0' && x < n)
	{
		dest[c] = src[x];
		x++;
		c++;
	}
	dest[c] = '\0';
	return (ft_strlen(dest));
}
