#include "fn_printf.h"

int	fn_putus(unsigned int n)
{
	int	length;
	
	length = 0;
	if (n >= 10)
	{
		length += fn_putchar((n % 10) + '0');
		length += fn_putus(n / 10);
	}
	if (n < 10)
		length += fn_putchar(n);
	return (length);
}
