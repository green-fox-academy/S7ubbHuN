#include <stdio.h>
#include <stdlib.h>

int main()
{
    char asc=0;
    int n=33;
    for(asc = '!'; asc <= '~'; asc++)
        {
            printf("The '%c' ASCII value in decimal is: %d\n", asc, n);
            n=n+1;
        }

    return 0;
}
