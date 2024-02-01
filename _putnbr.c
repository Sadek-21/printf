#include "main.h"

void	_putnbr(long n, int *len)
{
	if (n < 0)
	{
		_putchar('-', len);
		n *= -1;
		_putnbr(n, len);
	}
	else if (n > 9)
	{
		_putnbr(n / 10, len);
		_putnbr(n % 10, len);
	}
	else
		_putchar(n + 48, len);
}
