#include <stdio.h>
#include <stdlib.h>
#define MAXC 100


typedef struct {
char description[MAXC];
} todo_s;

int i;

void write_to_file(todo_s *task);
void asking_input_fgets(char* command, char* todostring, char* user_input);
void add_new_task(todo_s *task, char* todostring);
