#include <stdio.h>
#include <stdlib.h>

int main()
{
    char command[3];
    char todostring[100];
    char user_input[255];

    todo_menu();
    system("cls");

    do {

        asking_input_fgets(command, todostring, user_input);

        if (strcmp(command, "-a") == 0) {


        } else if (strcmp(command, "-wr") == 0) {


        } else if (strcmp(command, "-rd") == 0) {


        } else if (strcmp(command, "-l") == 0) {


        } else if (strcmp(command, "-e") == 0) {


        } else if (strcmp(command, "-rm") == 0) {


        } else if (strcmp(command, "-p") == 0) {


        } else if (strcmp(command, "-lp") == 0) {


        }



    }
    while (strcmp(command, "exit") != 0);
}
