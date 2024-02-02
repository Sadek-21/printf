#include "main.h"

/*
 * _flag_checker - Checks and handles format specifiers for printf.
 * @args: va_list containing the variable arguments.
 * @c: Format specifier character.
 * @len: Pointer to the length variable for tracking output length.
 */
static void	_flag_checker(va_list args, char c, int *len)
{
	if (c == '%')
		_putchar('%', len);
	else if (c == 'c')
		_putchar(va_arg(args, int), len);
	else if (c == 's')
		_putstr(va_arg(args, char *), len);
	else if (c == 'u')
		_putnbr(va_arg(args, unsigned int), len);
	else if (c == 'i' || c == 'd')
		_putnbr(va_arg(args, int), len);
	else if (c == 'x' || c == 'X')
		_putnbr_base(va_arg(args, unsigned long), c, len);
	else if (c == 'p')
	{
		_putstr("0x", len);
		_putnbr_base(va_arg(args, unsigned long int), c, len);
	}
	else
		_putchar(c, len);
}

/**
 * _printf - custom printf function
 * @format: format string containing format specifiers
 *
 * This function emulates the behavior of the standard printf function.
 * It supports a subset of format specifiers including %c, %s, %u, %d, %i,
 * %x, %X, and %p.
 *
 * Return: The number of characters printed (excluding null byte).
 */

int	_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			_flag_checker(args, *format, &len);
		}
		else
			_putchar(*format, &len);
		format++;
	}
	va_end(args);
	return (len);
}
