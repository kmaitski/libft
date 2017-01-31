#include "../../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	a;
	size_t	c;
	int	co;
	int	l;

	c = 0;
	co = 0;
	l = ft_strlen(needle);
	if (needle[co] == '\0')
		return ((char *)haystack);
	while (haystack[c] != '\0' && c < len)
	{
		if (haystack[c] == needle[co])
		{
			a = c;
			while (needle[co] != '\0' && haystack[c] == needle[co])
			{
				co++;
				c++;
			}
			if (co == l)
				return ((char *)&haystack[a]);
			c = a;
			co = 0;
		}
		c++;
	}
	return (NULL);
}
