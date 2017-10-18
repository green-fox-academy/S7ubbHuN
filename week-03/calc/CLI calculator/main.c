#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "declarations.h"

//menu, sum, sub, multiply, division, div with remainder, square, square root, logarithm, conversions



int main()
{
    char number1[20];
    char command[5];
    int number2;
    int ptr;

    calc_menu();
    scanf("%s %s %d", number1, command, &number2);
    long numberbuffer = strtol(number1, &ptr, 10);


    printf("%05d", logx(numberbuffer, number2));





    return 0;
}
