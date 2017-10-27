#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include <errno.h>
#include <string.h>
#define MAXC 100



int main()
{

    FILE *fp = fopen("todos.txt", "r");
    if(fp == NULL) {
        perror("Error opening file");
        return(-1);
    }

    //megszámolni a sortöréseket
    int count = 0;
    while ((ch = fgetc(fp)) != EOF){
        if (ch == '\n')
        count++;
    }
    printf("%d", count);
    //a file tartalma beolvasva memóriába
    todo_s task[10] = {0};
    rewind(fp); //file pointer reset
    for (i = 0; i < count; i++) {
        fgets(task[i].description, MAXC, fp);
    }
    fclose(fp);


    char command[6];
    //char todostring[00];
    char user_input[255];


    todo_menu();
    system("cls");

    do {


        //asking_input_fgets(command, todostring, user_input, task);
        asking_input_scanfgets(command, user_input);

        if (strcmp(command, "exit") == 0) { //remove these for fgets asking
            printf("The program is exiting now. Goodbye!");
            exit(0);
        } else if (strcmp(command, "clear") == 0) {
            system("cls");
        } else if (strcmp(command, "help") == 0) {
            system("cls");
            todo_menu();
            system("cls");
        } else if (strcmp(command, "-l") == 0) {
            system("cls");
            list_todos(task);
            printf("Please continue giving commands:\n"); //till here
        } else if (strcmp(command, "-a") == 0) {
            add_new_task(task, user_input);
            write_to_file(task);
        } else if (strcmp(command, "-e") == 0) {
            memset(&task, 0, sizeof(task));
            write_to_file(task);
        } else if (strcmp(command, "-rm") == 0) {
            remove_task(task, user_input);

            write_to_file(task);
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
