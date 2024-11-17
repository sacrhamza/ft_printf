#include <unistd.h>
#include <stdio.h>

int main()
{
	printf("%ld", write(1, "           ", 10));
}
