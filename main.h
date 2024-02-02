#ifndef MAIN_H
# define MAIN_H

# include <stdarg.h>
# include <unistd.h>

int		_printf(const char *format, ...);
void	_putchar(char c, int *len);
void	_putstr(char *s, int *len);
void	_putnbr_base(unsigned long n, char c, int *len);
void	_putnbr(long n, int *len);

#endif/* MAIN_H */
