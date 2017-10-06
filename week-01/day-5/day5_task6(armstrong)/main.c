#include <stdio.h>
#include <stdlib.h>

int main()
{
    int strnum=0, num=0, digit=0;
    printf("Enter a number: \n");
    scanf ("%d", &strnum);
    printf("--------------------------\n");

    num=strnum;
    while (num!=0){
        num/=10;
        digit++;
    }




    printf("%d", digit);

    return 0;
}
