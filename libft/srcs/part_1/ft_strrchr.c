#include "../../includes/libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	l;

	l = ft_strlen(str);
	while (l && str[l] != c)
		l--;
	if (str[l] == c)
		return ((char *)&str[l]);
	return (NULL);
}
