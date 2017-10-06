#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
Create a program which prints out all the prime numbers
also add a feature where you can tell the from - to limits
for example :
from = 11;
to = 34;
output :
13, 17, 19, 23, 29, 31 , this is 6 prime numbers
*/

    int strt = 0, end = 0, cnt = 0, a = 0, a2 = 0, b = 0;
    printf("Enter a starting number: \n");
    scanf ("%d", &strt);
    printf("Enter an ending number: \n");
    scanf ("%d", &end);
    printf("-------------------------\nThe prime number(s) are: ");
    for (a = strt; a <= end; a++) {
        for (a2 = 1; a2 <= a; a2++) {
            if (a % a2 == 0) {
                cnt++;
                if (cnt > 2)
                    break;
            }
        }
        if (cnt == 2) {
            printf("%d, ", a);
            b++;
        }
        cnt = 0;
    }
    printf("\nThis is %d prime number(s), between %d and %d.", b, strt, end);
    return 0;
}
