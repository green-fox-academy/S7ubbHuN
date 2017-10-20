#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include "declarations.h"

//menu, sum, sub, multiply, division, div with remainder, square, square root, logarithm, conversions
// USE EXTERN OPERAND FOR Y!!!!!

int main()
{
    char numberstring1[20];
    char command[6];
    char numberstring2[20];
    char user_input[80];
    int y = 0;


    calc_menu();
    system("cls");

    do {

        //asking_input_fgets(numberstring1, command, numberstring2, user_input);
        asking_input_scanf(numberstring1, command, numberstring2);

        float number1 = strtof(numberstring1, NULL);
        float number2 = strtof(numberstring2, NULL);
        int x = strlen(numberstring1) + strlen(command) + strlen(numberstring2) + 2;

        if (strcmp(command, "+") == 0) {
            set_cursor_pos(x, y);
            printf(" = %.2f\n", sum(number1, number2));
        } else if (strcmp(command, "-") == 0) {
            set_cursor_pos(x, y);
            printf(" = %.2f\n", subt(number1, number2));
        } else if (strcmp(command, "*") == 0) {
            set_cursor_pos(x, y);
            printf(" = %.2f\n", multiply(number1, number2));
        } else if (strcmp(command, "/") == 0) {
            set_cursor_pos(x, y);
            if (zero_operand(number1, number2) == 0) {
                printf(" = %.2f\n", divi(number1, number2));
            }
        } else if (strcmp(command, "%") == 0) {
            set_cursor_pos(x, y);
            if (zero_operand(number1, number2) == 0) {
                printf(" = %d\n", divi_w_remainder(number1, number2));
            }
        } else if (strcmp(command, "^") == 0) {
            set_cursor_pos(x, y);
            printf(" = %.2f\n", sqr(number1));
        } else if (strcmp(command, "v") == 0) {
            set_cursor_pos(x, y);
            if (zero_operand(number1, number2) == 0) {
                printf(" = %.2f\n", sqr_root(number1));
            }
        } else if (strcmp(command, "log") == 0) {
            set_cursor_pos(x, y);
            if (zero_operand(number1, number2) == 0) {
                printf(" = %f\n", logx(number2, number1));
            }
        } else if (strcmp(command, "binto") == 0) {
            set_cursor_pos(x, y);
            if (conversion_range(number2) == 0) {
                printf(" = %s\n", binto(numberstring1, number2));
            }
        } else if (strcmp(command, "octto") == 0) {
            set_cursor_pos(x, y);
            if (conversion_range(number2) == 0) {
                printf(" = %s\n", octto(numberstring1, number2));
            }
        } else if (strcmp(command, "decto") == 0) {
            set_cursor_pos(x, y);
            if (conversion_range(number2) == 0) {
                printf(" = %s\n", decto(numberstring1, number2));
            }
        } else if (strcmp(command, "hexto") == 0) {
            set_cursor_pos(x, y);
            if (conversion_range(number2) == 0) {
                printf(" = %s\n", hexto(numberstring1, number2));
            }
        }
        y++;
    }
    while (strcmp(numberstring1, "exit") != 0);
}
