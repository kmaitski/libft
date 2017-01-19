#include "../../includes/libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	x;
	int	y;
	char	*s;

	x = 0;
	y = 0;
	while (str[x] != '\0')
	{
		if (str[x] == c)
		{
			while (str[x] != c)
				y++;
			s = ft_strnew(y);
			y = 0;
			while (str[x] != '\0')
			{
				s[y] = str[x];
				y++;
				x++;
			}
			s[y] = '\0';
			return (s);
		}
		x++;
	}
	return (NULL);
}
