#include "main.h"

/*
 * _putstr - Prints a string to the standard output.
 * @s: Pointer to the string to be printed.
 * @len: Pointer to the length variable for tracking output length.
 */

void	_putstr(char *s, int *len)
{
	if (!s)
		_putstr("(null)", len);
	while (s && *s)
	{
		_putchar(*s, len);
		s++;
	}
}
