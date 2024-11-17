#include "fn_printf.h"

int	ft_printf(char *format, ...)
{
	int	length;
	int	i;
	va_list	args;

	i = 0;
	length = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
			length += fn_global(format[i++ + 1], args);
		else if (format[i] != '\0')
			length += fn_putchar(format[i]);
		i++;
	}
	return (length);
}
