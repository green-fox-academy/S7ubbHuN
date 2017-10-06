#include <stdio.h>
#include <stdlib.h>

int main()
{
    int onum=0, num=0, digit=0, rem=0, powsum=0;
    printf("Enter a number: \n");
    scanf ("%d", &onum);
    printf("--------------------------\n");

    num=onum;
    while (num!=0) {
        num /= 10;
        digit++;
    }

    num=onum;
    while (num != 0) {
        rem = num%10;
        powsum += pow(rem, digit);
        num /= 10;
    }
    if (powsum == onum){
        printf("This number is an Armstrong number!");
    }
    else {
        printf("This number is NOT an Armstrong number!");
    }



    return 0;
}
