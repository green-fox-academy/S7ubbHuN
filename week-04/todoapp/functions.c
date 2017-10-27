#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "menu.h"
#include <errno.h>
#include <string.h>


void asking_input_fgets(char* command, char* todostring, char* user_input, todo_s *task)
{
    while (strstr(user_input, " ") == 0) {
        fgets(user_input, 255, stdin);

        if (strcmp(user_input, "exit\n") == 0) {
            printf("The program is exiting now. Goodbye!");
            exit(0);
        } else if (strcmp(user_input, "clear\n") == 0) {
            system("cls");
        } else if (strcmp(user_input, "help\n") == 0) {
            system("cls");
            todo_menu();
            system("cls");
        } else if (strcmp(user_input, "-l\n") == 0) {
            system("cls");
            list_todos(task);
            printf("Please continue giving commands:\n");
        }
    }
    fgets(user_input, 255, stdin);
    strcpy(command, strtok(user_input, " "));
    strcpy(todostring, strtok(NULL, "\0"));
}

void asking_input_scanfgets(char* command, char* user_input)
{
    scanf("%s", command);
    fgets(user_input, 255, stdin);
}


/*void asking_input_fgetsORIG(char* command, char* todostring, char* user_input, todo_s *task)
{
    fgets(user_input, 255, stdin);
    strcpy(command, strtok(user_input, " "));
    if (strcmp(command, "exit\n") == 0) {
        printf("The program is exiting now. Goodbye!");
        exit(0);
    } else if (strcmp(command, "clear\n") == 0) {
            system("cls");
            fgets(user_input, 255, stdin);
            strcpy(command, strtok(user_input, " "));
    } else if (strcmp(command, "help\n") == 0) {
            system("cls");
            todo_menu();
            system("cls");
            fgets(user_input, 255, stdin);
            strcpy(command, strtok(user_input, " "));
    }
    strcpy(todostring, strtok(NULL, "\0"));
}*/

void add_new_task(todo_s *task, char* user_input)
{
    strcpy (task[i].description, user_input);
    i++;
}

void write_to_file(todo_s *task)
{
    FILE *fp = fopen("todos.txt", "w");
    for (int j = 0; j < i; j++) {
        fprintf(fp, "%s", task[j].description);
        }
    fclose(fp);
}

void list_todos(todo_s *task)
{
    for (int j = 0; j < i; j++) {
        printf("%s", task[j].description);
        }
}

void remove_task(todo_s *task, char* user_input)
{
    int pos = 0;
    i--;
    for (int k = 0; k < i; k++) {
        if (strcmp(task[k].description, user_input)  == 0) {
            pos = k;
            for (int k = pos; k < i; k++) {
                strcpy(task[k].description, task[k + 1].description);
            }
        }
    }
}
