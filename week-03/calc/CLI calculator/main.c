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


    calc_menu();
    scanf("%s %s %d", number1, command, &number2);
    long numberbuffer = strtol(number1, NULL, 10);


    //printf("%f", logx(numberbuffer, number2));
    //printf("%f", sqr_root(numberbuffer));





    return 0;
}
