#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

void calc_menu()
{
    printf("                 CLI Calculator");
    printf("\n             ----------------------");
    printf("\n  How to use: number1 command number2");
    printf("\n             ----------------------");
    printf("\n  Commands:\n");
    printf("\n  +     summation");
    printf("\n  -     subtraction");
    printf("\n  *     multiplication");
    printf("\n  /     division");
    printf("\n  %c     division with remainder", '%');
    printf("\n  ^     powering num1 to num2");
    printf("\n  v     square rooting (accepts any number for 2nd)");
    printf("\n             ----------------------");
    printf("\n  If you are using these commands below then\n  number2 means the desired system (2-32) or logarithm!");
    printf("\n             ----------------------");
    printf("\n  log     logarithm");
    printf("\n  binto   binary to any system");
    printf("\n  octto   octal to any system");
    printf("\n  decto   decimal to any system");
    printf("\n  hexto   hexadecimal to any system");
    printf("\n             ----------------------");
    printf("\n  exit    Exits from the calculator");
    printf("\n  clear   Clears the screen");
    printf("\n  help    Lists the menu again");
    printf("\n             ----------------------\n");
    printf("\t");
    system("pause");

}
