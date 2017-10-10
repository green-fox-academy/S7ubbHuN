#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[255];   // Buffer variable for user input

    //TODO:
    // Get the user's name with scanf
    printf("Enter your name: ");
    scanf("%s", buffer);

    //TODO:
    // Print it out with printf
    printf("\n");
    printf("Your name is: %s.", buffer);

    return 0;
}
