#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>


/**
 * struct types - specifier structure for printf
 * @ch: pointer to char specifier
 * @func_ptr: pointer to va_list functuions.
 *
 */
typedef struct types
{
	char ch;
	int (*func_ptr)(va_list);
} print_func;

int _putc(va_list c);
int _putstr(va_list s);
int (*func(const char a))(va_list);
int _putnbr(va_list n);
int _printf(const char *format, ...);
int _putchar(char c);
int _putint(va_list n);




#endif
