static void     _flag_checker(va_list args, char c, int *len)
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
