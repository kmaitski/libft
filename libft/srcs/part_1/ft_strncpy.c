#include "../../includes/libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
