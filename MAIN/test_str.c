#include <stdio.h>
#include "../fn_printf.h"
#include <limits.h>
int main()
{
	int a = fn_putnbr(INT_MAX);
	printf("%d", a);
	return (0);
}
