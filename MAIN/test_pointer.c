#include <stdio.h>
#include "../fn_printf.h"

int main()
{
	int a = 99;
	int b = fn_putptr(&a);	
	fn_putnbr(b);
}
