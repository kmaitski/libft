#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*n;
	int	c;

	n = ft_strnew(ft_strlen(s));
	if (!n)
		return (NULL);
	c = 0;
	while (s[c] != '\0')
	{
		n[c] = s[c];
		c++;
	}
	return (n);
}
