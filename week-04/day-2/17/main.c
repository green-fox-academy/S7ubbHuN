#include <stdio.h>
#define MAX_CHARS 255 // Maximum characters allowed


int main()
{
    //TODO: write a function which finds the maximum occurrence of a character in a given string.
    //return with the most frequent character
    //the number of occurrence should be an output parameter

    //kell: tömb a karakterek elõfordulásának számolására (ascii értékekkel), függvény a legmagasabb érték megkeresésére a tömbben.

    char str[] = "e is the most frequent element.";
    int occurrence = 0;

    printf("Your string was: '%s'\n", str);
    printf("'%c' is the most frequent character in the string and it has ", max_occurrence(str, &occurrence));
    printf("%d occurrences.", occurrence);
    return 0;
}

int max_occurrence(char *str,int *occurrence)
{
    int frequency[MAX_CHARS];
    int ascii = 0;

    for (int i = 0; i < MAX_CHARS; i++) {
        frequency[i] = 0;
    }
    int i = 0;
    while (str[i] != '\0') {
        ascii = (int)str[i];
        frequency[ascii]++;
        i++;
    }
    int highest = 0;
    for (int i = 0; i < MAX_CHARS; i++) {
        if (frequency[i] > frequency[highest]) {
            highest = i;
        }
    }
    //printf("%c", highest);
    //printf("\n%d", frequency[highest]);
    *occurrence = frequency[highest];
    return highest;
}
