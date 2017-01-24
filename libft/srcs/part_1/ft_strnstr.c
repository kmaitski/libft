#include "../../includes/libft.h"

char	*ft_strnstr(char *haystack, const char *needle, size_t len)
{
	char	*a;
	size_t	c;
	int	co;
	int	l;

	c = 0;
	co = 0;
	l = ft_strlen(needle);
	while (haystack[c] != '\0' && c < len)
	{
		if (haystack[c] == needle[co])
		{
			a = &haystack[c];
			while (needle[co] != '\0' && haystack[c] == needle[co])
			{
				co++;
				c++;
			}
			if (co == l)
				return (a);
		}
		haystack = a;
		co = 0;
		c++;
	}
	a = NULL;
	return (a);
}
