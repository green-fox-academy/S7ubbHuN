#include <stdio.h>
#include <stdlib.h>

void printf_numbers(unsigned int from, unsigned int to)
{
    for (unsigned int i = from; i < to; i++)
		printf("%u,", i);
}

int main()
{
	printf_numbers(2147483600,2147484600); //"to" is out of int boundary, have to use ulong
	return 0;
}
