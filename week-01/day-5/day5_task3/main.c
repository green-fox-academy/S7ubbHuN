#include <stdio.h>
#include <stdlib.h>

//how much odd numbers are between 179 & 371
//you should be able to change the limits, like from 10 to 234
//and the program should print out the odd numbers between those two numbers
//example from 11 to 27 the program should print out:
// 13, 15, 17, 19, 21, 23, 25 this is 7 odd number between 11 and 27

int main()
{
    int a1, a2, b, c=0;
    printf("Enter a starting number: \n");
    scanf ("%d", &a1);
    printf("Enter an ending number: \n");
    scanf ("%d", &b);
    printf("-------------------------\nThe odd numbers are: ");
    for (a2=a1; a2<=b; a2++)
        if (a2%2!=0)
        {
        printf("%d, ",a2);
        c++;
        }
    printf("\nThis is %d odd numbers, between %d and %d.", c, a1, b);

    return 0;
}
