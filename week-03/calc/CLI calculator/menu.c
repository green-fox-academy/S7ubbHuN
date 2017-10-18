#include <stdio.h>
#include <stdlib.h>

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
    printf("\n  ^     squaring");
    printf("\n  v     square rooting");
    printf("\n             ----------------------");
    printf("\n  If you are using these commands below then\n  number2 means the desired system (2-32) or logarithm!");
    printf("\n             ----------------------");
    printf("\n  log     logarithm");
    printf("\n  binto   binary to ox, dec or hex");
    printf("\n  oxto    oxal to bin, dec or hex");
    printf("\n  decto   decimal to bin, ox or hex");
    printf("\n  hexto   hexadecimal to bin, dec or ox");
    printf("\n             ----------------------");
    printf("\n  exit    Exiting from the calculator");
    printf("\n  clear   Clears the screen");
    printf("\n  help    Lists the menu again");
    printf("\n             ----------------------");
    printf("\n               Hit enter to start!");
    printf("\n             ======================\n");

}
