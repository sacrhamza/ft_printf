#include "fn_printf.h"

int	fn_global(char c, va_list args)
{
	int	length;

	if (c == 'c')
		length = fn_putchar(va_arg(args, int));
	else if (c == 's')
		length = fn_putstr(va_arg(args, char *));
	else if (c == 'p')
		length = fn_putptr(va_arg(args, void *));
	else if (c == 'x')
		length = fn_puthex(va_arg(args, unsigned int), fn_tolower);
	else if (c == 'X')
		length = fn_puthex(va_arg(args, unsigned int), fn_toupper);
	else if (c == 'd' || c == 'i')
		length = fn_putnbr(va_arg(args, int));
	else if (c == 'u')
		length = fn_putus(va_arg(args, unsigned int));
	return (length);
}
