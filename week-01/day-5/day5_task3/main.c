#include <stdio.h>
#include <stdlib.h>

//how much odd numbers are between 179 & 371
//you should be able to change the limits, like from 10 to 234
//and the program should print out the odd numbers between those two numbers
//example from 11 to 27 the program should print out:
// 13, 15, 17, 19, 21, 23, 25 this is 7 odd number between 11 and 27

int main()
{
    int a, b, c=0;
    printf("Enter a starting number: \n");
    scanf ("%d", &a);
    printf("Enter an ending number: \n");
    scanf ("%d", &b);
    printf("-------------------------\nThe odd numbers are: ");
    for (a=a; a<=b; a++)
        if (a%2!=0)
        {
        printf("%d, ",a);
        c++;
        }
    printf("this is %d odd numbers.", c);

    return 0;
}
