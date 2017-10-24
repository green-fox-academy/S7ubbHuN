#include <stdio.h>

int my_strlen(char *string)
{
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}

int main()
{
	char my_string[50] = "Hello world!";

	//TODO: implement your own strlen function.

	printf("Your string '%s' is %d character long", my_string, my_strlen(my_string));
	return 0;
}
