#include "libft.h"

char	*ft_strrev(char *str)
{
	unsigned int	i;
	int				j;
	char			k;

	i = ft_strlen(str);
	j = -1;
	while (++j < --i)
	{
		k = str[j];
		str[j] = str[i];
		str[i] = k;
	}
	return (str);
}
