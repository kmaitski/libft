#include "libft.h"

void	ft_print_bits(unsigned char octet)
{
	unsigned int	i;

	i = 8;
	while (i--)
	{
		if (octet / 128)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		octet <<= 1;
	}
}
