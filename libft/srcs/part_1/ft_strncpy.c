#include "../../includes/libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	c;

	c = 0;
	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
