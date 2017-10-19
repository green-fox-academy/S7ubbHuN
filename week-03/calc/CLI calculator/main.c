#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include "declarations.h"

//menu, sum, sub, multiply, division, div with remainder, square, square root, logarithm, conversions


int main()
{
    char numberstring1[20];
    char command[6];
    char numberstring2[20];
    char user_input[80];
    //const char ws[2] = " ";
    int y = 0;

    calc_menu();
    system("cls");

    do {
        /*fgets(user_input, 50, stdin);
        strcpy(numberstring1, strtok(user_input, " "));
        if (strcmp(numberstring1, "exit\n") == 0) {
            break;
        }
        strcpy(command, strtok(NULL, " "));
        strcpy(numberstring2, strtok(NULL, " "));*/

        scanf("%s", numberstring1);
        if (strcmp(numberstring1, "exit") == 0) {
            break;
        } else if (strcmp(numberstring1, "clear") == 0) {
            system("cls");
        } else if (strcmp(numberstring1, "help") == 0) {
            calc_menu();
            system("cls");
        }
        scanf("%s", command);
        scanf("%s", numberstring2);


        long number1 = strtol(numberstring1, NULL, 10);
        long number2 = strtol(numberstring2, NULL, 10);
        int x = strlen(numberstring1) + strlen(command) + strlen(numberstring2) + 2;

        if (strcmp(command, "+") == 0) {
            set_cursor_pos(x, y);
            printf(" = %d\n", sum(number1, number2));
        } else if (strcmp(command, "-") == 0) {
            set_cursor_pos(x, y);
            printf(" = %d\n", subt(number1, number2));
        } else if (strcmp(command, "*") == 0) {
            set_cursor_pos(x, y);
            printf(" = %d\n", multiply(number1, number2));
        } else if (strcmp(command, "/") == 0) {
            set_cursor_pos(x, y);
            printf(" = %f\n", divi(number1, number2));
        } else if (strcmp(command, "%") == 0) {
            set_cursor_pos(x, y);
            printf(" = %d\n", divi_w_remainder(number1, number2));
        } else if (strcmp(command, "sqr") == 0) {
            set_cursor_pos(x, y);
            printf(" = %d\n", sqr(number1));
        } else if (strcmp(command, "sqr_root") == 0) {
            set_cursor_pos(x, y);
            printf(" = %f\n", sqr_root(number1));
        } else if (strcmp(command, "log") == 0) {
            set_cursor_pos(x, y);
            printf(" = %f\n", logx(number2, number1));
        } else if (strcmp(command, "binto") == 0) {
            set_cursor_pos(x, y);
            printf(" = %s\n", binto(numberstring1, number2));
        } else if (strcmp(command, "octto") == 0) {
            set_cursor_pos(x, y);
            printf(" = %s\n", octto(numberstring1, number2));
        } else if (strcmp(command, "decto") == 0) {
            set_cursor_pos(x, y);
            printf(" = %s\n", decto(numberstring1, number2));
        } else if (strcmp(command, "hexto") == 0) {
            set_cursor_pos(x, y);
            printf(" = %s\n", hexto(numberstring1, number2));
        }
        y++;
    }
    while (strcmp(numberstring1, "exit") != 0);
    printf("The program is exiting now. Goodbye!");
}
