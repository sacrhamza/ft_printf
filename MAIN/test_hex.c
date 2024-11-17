#include <stdio.h>
#include "../fn_printf.h"
#include <limits.h>
int main()
{
	int s;
	int a = printf("hey hey hey hey %s %d %x %X  %p %d %%\n", "hellow", 99999, 255, 255, &s, 2147483699u);
	int c = printf("hey hey hey hey %s %d %x %X  %p %d %%\n", "hellow", 99999, 255, 255, &s, 2147483699u);
	printf("%d %d\n", a, c);
	return (0);
}
