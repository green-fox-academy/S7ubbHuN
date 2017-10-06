#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ascii=0;
    int n=33;
    for(ascii = '!'; ascii <= '~'; ascii++)
        {
            printf("The '%c' ASCII value in decimal is: %d\n", ascii, n);
            n=n+1;
        }

    return 0;
}
