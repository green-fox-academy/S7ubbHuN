#include <stdio.h>
#include <stdlib.h>

int main()
{
    int original_num=0, num=0, digit=0, remainder=0, powered_sum=0;
    printf("Enter a number: \n");
    scanf ("%d", &original_num);
    printf("--------------------------\n");
    num=original_num;
    while (num!=0) {
        num /= 10;
        digit++;
    }
    num=original_num;
    while (num != 0) {
        remainder = num%10;
        powered_sum += pow(remainder, digit);
        num /= 10;
    }
    if (powered_sum == original_num) {
        printf("This number is an Armstrong number, because the %d powered sum of the digits is: %d\n", digit, powered_sum);
        printf("It is equal to the original number: %d", original_num);
    } else {
        printf("This number is NOT an Armstrong number, because the %d powered sum of the digits is: %d\n", digit, powered_sum);
        printf("It is NOT equal to the original number: %d", original_num);
    }
    return 0;
}
