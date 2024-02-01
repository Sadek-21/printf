#include "main.h"

void	_putnbr_base(unsigned long n, char c, int *len)
{
	unsigned int	base_len;
	char			*base;

	base_len = 16;
	if (c != 'p')
		n = (unsigned int)n;
	if (c == 'x' || c == 'p')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n < base_len)
		_putchar(base[n % base_len], len);
	else
	{
		_putnbr_base(n / base_len, c, len);
		_putnbr_base(n % base_len, c, len);
	}
}
