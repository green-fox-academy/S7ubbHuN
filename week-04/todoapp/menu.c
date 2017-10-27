#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

void todo_menu()
{
    printf("                 TO-DO Application");
    printf("\n             ----------------------");
    printf("\n  How to use: command task");
    printf("\n             ----------------------");
    printf("\n  Commands:\n");
    printf("\n  -a      Adds a new task");
    printf("\n  -l      Lists all the tasks");
    printf("\n  -e      Empty the list");
    printf("\n  -rm     Removes a task");
    printf("\n  -p      Add priority to a task");
    printf("\n  -lp     Lists all the tasks by priority");
    printf("\n             ----------------------");
    printf("\n  exit    Exits from the calculator and writes everything to file");
    printf("\n  clear   Clears the screen");
    printf("\n  help    Lists the menu again");
    printf("\n             ----------------------\n");
    printf("\t");
    system("pause");

}

