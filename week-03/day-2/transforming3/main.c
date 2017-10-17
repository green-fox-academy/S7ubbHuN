#include <stdio.h>
#include <string.h>

//TODO: write a function which returns 485 as unsigned integer value
//put your return value in an integer variable in which you should have 229, and print it out
//try to figure out which type casting you should use

int ret485()
{
    unsigned int a = 485;
    return a;
}

int main()
{
    int ret229 = ret485();
	printf("%d", ret229);

    return 0;
}
