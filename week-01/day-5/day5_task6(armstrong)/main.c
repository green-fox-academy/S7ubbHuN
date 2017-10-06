#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0, digit=0;
    printf("Enter a number: \n");
    scanf ("%d", &num);
    printf("--------------------------\n");
    while (num!=0){
        num/=10;
        digit++
    }

    return 0;
}
