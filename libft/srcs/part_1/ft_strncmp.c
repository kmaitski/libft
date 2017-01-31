#include "../../includes/libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	c;

	c = 0;
	while (str1[c] !='\0' && str2[c] != '\0' && c < n)
	{
		if (str1[c] != str2[c])
			return ((unsigned char)str1[c] - (unsigned char)str2[c]);
		c++;
	}
	return ((unsigned char)str1[c] - (unsigned char)str2[c]);
}
