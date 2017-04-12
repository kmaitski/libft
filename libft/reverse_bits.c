#include "libft.h"

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result = 0;
	int		bit = 128;

	while (octet)
	{
		result = result + (octet % 2) * bit;
		octet>>=1;
		bit /= 2;
	}
	return (result);
}
