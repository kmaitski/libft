#include "libft.h"

unsigned char	ft_reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				bit;
	
	result = 0;
	bit = 128;
	while (octet)
	{
		result = result + (octet % 2) * bit;
		octet>>=1;
		bit /= 2;
	}
	return (result);
}
