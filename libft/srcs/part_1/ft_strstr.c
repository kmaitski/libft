#include "../../includes/libft.h"

char	*ft_strstr(char *haystack, const char *needle)
{
	int	l;
	int	c;
	int	co;
	int	t;
	char	*a;

	l = ft_strlen(needle);
	c = 0;
	co = 0;
	t = 0;
	while (haystack[c] != '\0')
	{
		if (haystack[c] == needle[co])
		{
			a = &haystack[c];
			while (needle[co] != '\0' && haystack[c] == needle[co])
			{
				c++;
				co++;
				t++;
			}
			if (t == l)
				return (a);
		}
		c++;
		co = 0;
		t = 0;
		haystack = a;
	}
	a = NULL;
	return (a);
}
