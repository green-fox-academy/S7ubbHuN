#include <stdio.h>
#include <stdlib.h>

void any_to_other(char* str, int original_base, int new_base)
{
    char buffer[20];
    int ptr;
    long number;
    number = strtol(str, &ptr, original_base);
    itoa(number, buffer, new_base);
    printf("%s", buffer);
}


int main()
{
    char str[20];
    int original_base;
    int new_base;
    int decnum;
    printf("Give me a number to transform it in an other system: ");
    scanf("%s", &str);
    printf("Give me the original base: ");
    scanf("%d", &original_base);
    printf("Give me the number of the new base: ");
    scanf("%d", &new_base);

    any_to_other(str, original_base, new_base);


    return 0;
}
