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

    if (strcmp(command, "+") == 0) {
        printf("%d", sum(numberbuffer, number2));
    } else if (strcmp(command, "-") == 0) {
        printf("%d", subt(numberbuffer, number2));
    } else if (strcmp(command, "*") == 0) {
        printf("%d", multiply(numberbuffer, number2));
    } else if (strcmp(command, "/") == 0) {
        printf("%d", divi(numberbuffer, number2));
    } else if (strcmp(command, "%") == 0) {
        printf("%d", divi_w_remainder(numberbuffer, number2));
    } else if (strcmp(command, "sqr") == 0) {
        printf("%d", sqr(numberbuffer));
    } else if (strcmp(command, "sqr_root") == 0) {
        printf("%f", sqr_root(numberbuffer));
    } else if (strcmp(command, "log") == 0) {
        printf("%f", logx(number2, numberbuffer));
    } else if (strcmp(command, "binto") == 0) {
        printf("%s", binto(number1, number2));
    } else if (strcmp(command, "octto") == 0) {
        printf("%s", octto(number1, number2));
    } else if (strcmp(command, "decto") == 0) {
        printf("%s", decto(number1, number2));
    } else if (strcmp(command, "hexto") == 0) {
        printf("%s", hexto(number1, number2));
    } else if (strcmp(number1, "exit") == 0) {
        printf("The program is exiting now. Goodbye!");
    } else if (strcmp(number1, "clear") == 0) {
        system("cls");
    } else if (strcmp(number1, "help") == 0) {
        calc_menu();
    }






}
