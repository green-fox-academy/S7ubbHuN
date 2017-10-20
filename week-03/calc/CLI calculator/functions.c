#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include "functions.h"
#include "menu.h"

float sum(float number1, float number2)
{
    return (number1 + number2);
}

float  subt(float number1, float number2)
{
    return (number1 - number2);
}

float  multiply(float number1, float number2)
{
    return (number1 * number2);
}

float divi(float number1, float number2)
{
    return number1 / number2;
}

int divi_w_remainder(int number1, int number2)
{
    return (number1 % number2);
}

float  sqr(float number1)
{
    return (number1 * number1);
}

float sqr_root(float number1)
{
    return (sqrt(number1));
}

float logx(int number2, int number1)
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
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void asking_input_scanf(char* numberstring1, char* command, char* numberstring2)
{
    scanf("%s", numberstring1);
    if (strcmp(numberstring1, "exit") == 0) {
        printf("The program is exiting now. Goodbye!");
        exit(0);
    } else if (strcmp(numberstring1, "clear") == 0) {
        system("cls");
        y = 0;
        scanf("%s", numberstring1);
    } else if (strcmp(numberstring1, "help") == 0) {
        system("cls");
        calc_menu();
        system("cls");
        y = 0;
        scanf("%s", numberstring1);
    }
    scanf("%s", command);
    scanf("%s", numberstring2);
}

int zero_operand(float number1, float number2)
{
    if (number1 == 0 || number2 == 0) {
        printf("\tNot allowed to use 0 as operand\n");
        return 1;
    }
    return 0;
}

int conversion_range(int number2)
{
    if (number2 < 2 || number2 > 32) {
        printf("\tUse a number between 2 and 32\n");
        return 1;
    }
    return 0;
}

void asking_input_fgets(char* numberstring1, char* command, char* numberstring2, char* user_input)
{
    fgets(user_input, 50, stdin);
    strcpy(numberstring1, strtok(user_input, " "));
    if (strcmp(numberstring1, "exit\n") == 0) {
        printf("The program is exiting now. Goodbye!");
        exit(0);
    } else if (strcmp(numberstring1, "clear\n") == 0) {
            system("cls");
            y = 0;
            fgets(user_input, 50, stdin);
            strcpy(numberstring1, strtok(user_input, " "));
    } else if (strcmp(numberstring1, "help\n") == 0) {
            system("cls");
            calc_menu();
            system("cls");
            y = 0;
            fgets(user_input, 50, stdin);
            strcpy(numberstring1, strtok(user_input, " "));

    }
    strcpy(command, strtok(NULL, " "));
    strcpy(numberstring2, strtok(NULL, " "));
}

