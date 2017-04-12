#include "libft.h"

char	*ft_search_and_replace(char *str, char i, char j)
{
	unsigned int	k;

	k = 0;
	while (str[k])
	{
		if (str[k] == i)
			str[k] = j;
		k++;
	}
	return (str);
}
