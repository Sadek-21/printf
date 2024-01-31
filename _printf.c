#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
* _printf - all of the logic for the printf project.
* @format: string specifier formats.
*
* Return: Gives The length(char_num++).
*/

int _printf(const char *format, ...)
{
	va_list	ars;
	int	i;

	va_start(ars, format);
	i = 0;

		while (*format)
		{
		if (*format == '%')
		{
		format++;
		if (*format == 'c')
		{
			char ch = va_arg(ars, int);

			write(1, &ch, 1);
			i++;

			}
		else if (*format == 's')
		{
			const char *st = va_arg(ars, const char *);

			i += write(1, st, strlen(st));
		}
			else if (*format == '%')
			{
			write(1, "%", 1);
			i++;
			}
		else
		{
		write(1, "%", 1);
		write(1, format, 1);
		i + = 2;
		}
	}
	else
	{
		write(1, format, 1);
	i++;
	}
		format++;
	}
	va_end(ars);
	return i;
}
