#include "libft.h"

void	rev_print(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	while (i--)
		write(1, &str[i], 1);
}
