#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include "declarations.h"

int sum(number1, number2)
{
    return (number1 + number2);
}

int subt(number1, number2)
{
    return (number1 - number2);
}

int multiply(number1, number2)
{
    return (number1 * number2);
}

float divi(number1, number2)
{
    return (number1 / number2);
}

int divi_w_remainder(number1, number2)
{
    return (number1 % number2);
}

int sqr(number1)
{
    return (number1 * number1);
}

float sqr_root(number1)
{
    return (sqrt(number1));
}

float logx(number2, number1)
{
    float logxofbasey = log(number2) / log(number1);
    return logxofbasey;
}


int binto(char* numberstring1, int number2)
{
    char buffer[20];
    long number;
    number = strtol(numberstring1, NULL, 2);
    itoa(number, buffer, number2);
    return buffer;
}

int octto(char* numberstring1, int number2)
{
    char buffer[20];
    long number;
    number = strtol(numberstring1, NULL, 8);
    itoa(number, buffer, number2);
    return buffer;
}

int decto(char* numberstring1, int number2)
{
    char buffer[20];
    long number;
    number = strtol(numberstring1, NULL, 10);
    itoa(number, buffer, number2);
    return buffer;
}

int hexto(char* numberstring1, int number2)
{
    char buffer[20];
    long number;
    number = strtol(numberstring1, NULL, 16);
    itoa(number, buffer, number2);
    return buffer;
}

void set_cursor_pos(int x, int y)
{
    COORD coord = {0,0};
	coord.X = x;
	coord.Y = y;
	//x = (strlen(number1) + strlen(command) + strlen(number2) + 2);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
