#include "libft.h"

unsigned char	ft_swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}
