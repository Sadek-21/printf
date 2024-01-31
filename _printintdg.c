#include "main.h"
int _printintdg(int n)
{
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		i++;
		n = -n;
	}
	if (n / 10 == 0)
	{
		_putchar(n % 10 + '0');
		return (i + 1);
	}
	i += _printintdg(n / 10);
	_putchar(n % 10 + '0');
	return (i + 1);
}
