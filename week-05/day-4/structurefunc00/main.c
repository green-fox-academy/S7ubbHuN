#include <stdio.h>
#include <stdlib.h>

/*
 * Create a structure representing the data of a book:
 *    * Title
 *    * Author
 *    * Year of publication
 *
 * Create functions for:
 *    * Creating a new book.
 *    * Changeing or setting the Title
 *    * Changeing or setting the Author
 *    * Changeing or setting the Year of publication
 *    * Getting each of these separately by a singel function each.
 *
 * IMPORTANT: The first parameter of each function should be a "Book", a variable of the type of this structure.
 *
 * Create a main where You demonstrate that each of these works and print out the necessary info.
 * IMPORTANT: You should only print from the main function. All other functions should return the info needed.
 */
typedef struct {
    char title[255];
    char author[100];
    char year[5];
} books;

int book_counter = 0;


void asking_input_scanfgets(char *command, char *user_input)
{
    scanf("%s", command);
    fgets(user_input, 255, stdin);
}

void create_book(books *book)
{
    book[book_counter];
    book_counter++;
}

void set_title(books *book, char *user_input)
{
    strcpy (book[book_counter - 1].title, user_input);
}

void set_author(books *book, char *user_input)
{
    strcpy (book[book_counter - 1].author, user_input);
}

void set_year(books *book, char *user_input)
{
    strcpy (book[book_counter - 1].year, user_input);
}



int main()
{
    char command[6];
    char user_input[255];
    books book[10] = {0};

    do {
        asking_input_scanfgets(command, user_input);

        if (strcmp(command, "exit") == 0) {
            printf("The program is exiting now. Goodbye!");
            exit(0);
        } else if (strcmp(command, "add") == 0) {
            create_book(book);

        } else if (strcmp(command, "title") == 0) {
            set_title(book, user_input);

        } else if (strcmp(command, "author") == 0) {
            set_author(book, user_input);

        } else if (strcmp(command, "year") == 0) {
            set_year(book, user_input);

        } else if (strcmp(command, "list") == 0) {
            for (int i = 0; i < book_counter; i++) {
                printf("\nBook num.: %d\nTitle: %sAuthor : %sYear of publishing: %s\n", i + 1, book[i].title, book[i].author, book[i].year);
            }
        }
    }
    while (strcmp(command, "exit") != 0);

    return 0;
}
