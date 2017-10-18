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
float logx(numberbuffer, number2)
{
    float logxofbasey = log(number2) / log(numberbuffer);
    return logxofbasey;
}
