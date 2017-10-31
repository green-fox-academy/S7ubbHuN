#include <stdio.h>
#include <stdlib.h>

/*
 * Create a representation of a chess board in the form of a two dimensional character array.
 * Each figure should have a character representing it. Empty places should be a single space: ' '.
 *
 * Create a function which sets up the board.
 *
 * Create a function for checking the moves for each of the figurs. They should get coordinates for the figure and where to move it.
 * They should return 0 if the move is acceptable in chess and -1 if not.
 *
 * Create a function which moves figures by getting the initial coordinate and the target coordinate.
 * This should return -1 if the move was not successful and 0 if all is right and if all is right then also move the figure.
 *
 * Determine what kind of arguments You need for the functions. Write them accordingly.
 *
 * For the sake of this exercise it's enough if You write the specific functions for peasants and horse.
 *
 * In the main functions set up the board and try them. Check if they work as intended.
 */

 void board_setup()
{
     char board [8][8];
     for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (i == 1 || i == 6) {
                    board [i][j] = 'P';
                } else if (i > 1 && i < 6) {
                    board [i][j] = ' ';
                } else if (i == 0 || i == 7) {
                    board [i][0] = 'R';
                    board [i][1] = 'H';
                    board [i][2] = 'B';
                    board [i][3] = 'Q';
                    board [i][4] = 'K';
                    board [i][5] = 'B';
                    board [i][6] = 'H';
                    board [i][7] = 'R';
                }
            }
    }
    for (int i = 0; i < 8; i++) {
            printf("\n");
            for (int j = 0; j < 8; j++) {
                printf("%c", board[i][j]);
            }
    }
}


int main()
{
    board_setup();
    return 0;
}
