#include <stdio.h>
#include <stdlib.h>
#define MAXC 100


typedef struct {
char description[MAXC];
} todo_s;

int i;
int ch;

void write_to_file(todo_s *task);
void asking_input_fgets(char* command, char* todostring, char* user_input, todo_s *task);
void asking_input_scanfgets(char* command, char* user_input);
void add_new_task(todo_s *task, char* user_input);
void list_todos(todo_s *task);
void remove_task(todo_s *task, char* user_input);
