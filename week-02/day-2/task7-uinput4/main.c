#include <stdio.h>
#include <stdlib.h>

int main()
{
    //write a void function which asks for a number with scanf and print it out with printf, then asks for a name with gets, and print it out with puts
    //you will notice something is wrong
    //try to solve the problem

    func();

    return 0;
}

void func()
{
    int num = 0;
    char str[255];

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\n");
    printf("Your number is %d.\n", num);
    fflush(stdin);
    printf("Enter your name: ");
    gets(str);
    printf("\n");
    printf("Your name is: ");
    puts(str);

}
