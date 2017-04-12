#include "libft.h"

char	*ft_ulstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else if (*str >='a' && *str <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
