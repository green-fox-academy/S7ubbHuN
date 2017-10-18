#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "declarations.h"

int sum(numberbuffer, number2)
{
    return (numberbuffer + number2);
}

int subt(numberbuffer, number2)
{
    return (numberbuffer - number2);
}

int multiply(numberbuffer, number2)
{
    return (numberbuffer * number2);
}

int divi(numberbuffer, number2)
{
    return (numberbuffer / number2);
}

int divi_w_remainder(numberbuffer, number2)
{
    return (numberbuffer % number2);
}

int sqr(numberbuffer)
{
    return (numberbuffer * numberbuffer);
}

float sqr_root(numberbuffer)
{
    return (sqrt(numberbuffer));
}

float logx(number2, numberbuffer)
{
    float logxofbasey = log(number2) / log(numberbuffer);
    return logxofbasey;
}


int binto(char* number1, int number2)
{
    char buffer[20];
    long number;
    number = strtol(number1, NULL, 2);
    itoa(number, buffer, number2);
    return buffer;
}

int octto(char* number1, int number2)
{
    char buffer[20];
    long number;
    number = strtol(number1, NULL, 8);
    itoa(number, buffer, number2);
    return buffer;
}

int decto(char* number1, int number2)
{
    char buffer[20];
    long number;
    number = strtol(number1, NULL, 10);
    itoa(number, buffer, number2);
    return buffer;
}

int hexto(char* number1, int number2)
{
    char buffer[20];
    long number;
    number = strtol(number1, NULL, 16);
    itoa(number, buffer, number2);
    return buffer;
}
