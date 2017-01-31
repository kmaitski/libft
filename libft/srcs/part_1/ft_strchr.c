#include "../../includes/libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	x;

	x = 0;
	while(str[x] != '\0' && str[x] != c)
		x++;
	if (str[x] == c)
		return ((char *)&str[x]);
	return (NULL);
}
