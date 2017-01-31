#include "../../includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	l;
	int	c;
	int	co;
	int	a;

	l = ft_strlen(needle);
	c = 0;
	co = 0;
	if (needle[co] == '\0')
		return ((char *)haystack);
	while (haystack[c] != '\0')
	{
		if (haystack[c] == needle[co])
		{
			a = c;
			while (needle[co] != '\0' && haystack[c] == needle[co])
			{
				c++;
				co++;
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
