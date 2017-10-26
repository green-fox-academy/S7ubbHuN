#include <stdio.h>
#include <stdlib.h>
#include "functions.h"




int main()
{

    char command[3];
    char todostring[100];
    char user_input[255];

    todo_menu();
    system("cls");

    do {
        FILE *fp = fopen("todos.txt", "r");
            if(fp == NULL) {
                perror("Error opening file");
                return(-1);
            }
        //megszámolni a sortöréseket
        int ch, count = 0;
        while ((ch = fgetc(fp)) != EOF){
            if (ch == '\n')
                count++;
            }
        //a file tartalma beolvasva memóriába
        todo_s task[10] = {0};
        rewind(fp); //file pointer reset
        for (i = 0; i < (count + 1); i++) {
            fgets(task[i].description, MAXC, fp);
        }
        fclose(fp);

        asking_input_fgets(command, todostring, user_input);

        if (strcmp(command, "-a") == 0) {
            add_new_task(task, todostring);
            write_to_file(task);

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
/*

    FILE *fp = fopen("todos.txt", "a+");
    if(fp == NULL) {
      perror("Error opening file");
      return(-1);
    }
    //a memória tartalma iírva fileba

    fclose(fp); */
}
