#include <stdio.h>
#define MAX_CHARS 255 // Maximum characters allowed


int main()
{
    //TODO: write a function which finds the maximum occurrence of a character in a given string.
    //return with the most frequent character
    //the number of occurrence should be an output parameter

    //kell: t�mb a karakterek el�fordul�s�nak sz�mol�s�ra (ascii �rt�kekkel), f�ggv�ny a legmagasabb �rt�k megkeres�s�re a t�mbben.

    char str[] = "e is the most frequent element.";


    return 0;
}

void max_occurrence(char *str)
{
    int frequency[MAX_CHARS];
    int ascii = 0;

    for (int i = 0; i < MAX_CHARS; i++) {
        frequency[i] = 0;
    }
    while (str[i] != 0) {
        ascii = int(str[i]);
        frequency[ascii]++;
        i++;
    }
}
