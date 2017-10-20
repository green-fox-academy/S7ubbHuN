#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern int y;
float sum(float number1, float number2);
float subt(float number1, float number2);
float multiply(float number1, float number2);
float divi(float number1, float number2);
int divi_w_remainder(int number1, int number2);
float sqr(float number1);
float sqr_root(float number1);
float logx(int number1, int number2);
int binto(char* numberstring1, int number2);
int octto(char* numberstring1, int number2);
int decto(char* numberstring1, int number2);
int hexto(char* numberstring1, int number2);
void set_cursor_posnumberstring1(int x, int y);
void asking_input_scanf(char* numberstring1, char* command, char* numberstring2);
int zero_operand(float number1, float number2);
int conversion_range(int number2);
void asking_input_fgets(char* numberstring1, char* command, char* numberstring2, char* user_input);

