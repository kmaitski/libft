#include "libft.h"

char	*ft_last_word(char *str)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(str);
	while (str[i] < 33 && i)
		i--;
	if (!i)
		return (NULL);
	j = i;
	while (str[j] > 32 && j)
		j--;
	j++;
	return (ft_strsub(str, j, i - j + 1));
}
