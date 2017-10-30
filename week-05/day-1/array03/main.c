#include <stdio.h>
#include <stdlib.h>

/*
 * Create a 2 dimensonal array of characters. 8x8
 * Fill the array with X and space alternating.
 * Print it out row by row. (It should resemble a chess board)
 * Designate a character for each chess peace. (Queen could be Q, King could be K, etc.)
 * Set up the start of a game.
 * Print it out again.
 * Make one move with a horse.
 * Print it again.
 */

int main()
{
    char chessboard[8][8] = {
        {'x', ' ', 'x', ' ', 'x', ' ', 'x', ' '},
        {' ', 'x', ' ', 'x', ' ', 'x', ' ', 'x'},
        {'x', ' ', 'x', ' ', 'x', ' ', 'x', ' '},
        {' ', 'x', ' ', 'x', ' ', 'x', ' ', 'x'},
        {'x', ' ', 'x', ' ', 'x', ' ', 'x', ' '},
        {' ', 'x', ' ', 'x', ' ', 'x', ' ', 'x'},
        {'x', ' ', 'x', ' ', 'x', ' ', 'x', ' '},
        {' ', 'x', ' ', 'x', ' ', 'x', ' ', 'x'}
    };

    int Q, K, R, B, H, P;
    int i, j;

    for ( i = 0; i < 8; i++ ) {
        for ( j = 0; j < 8; j++ ) {
            printf("%c", chessboard[i][j]);
            if (j == 7){
                printf("\n");
            }
        }
    }
    printf("\n\n");
    char setup_chessboard[8][8] = {
        {'R', 'H', 'B', 'Q', 'K', 'B', 'H', 'R'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'x', ' ', 'x', ' ', 'x', ' ', 'x', ' '},
        {' ', 'x', ' ', 'x', ' ', 'x', ' ', 'x'},
        {'x', ' ', 'x', ' ', 'x', ' ', 'x', ' '},
        {' ', 'x', ' ', 'x', ' ', 'x', ' ', 'x'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'H', 'B', 'Q', 'K', 'B', 'H', 'R'}
    };
    for ( i = 0; i < 8; i++ ) {
        for ( j = 0; j < 8; j++ ) {
            printf("%c", setup_chessboard[i][j]);
            if (j == 7){
                printf("\n");
            }
        }
    }
    printf("\n\n");
    char move_KN_chessboard[8][8] = {
        {'R', 'H', 'B', 'Q', 'K', 'B', 'H', 'R'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'x', ' ', 'x', ' ', 'x', ' ', 'x', ' '},
        {' ', 'x', ' ', 'x', ' ', 'x', ' ', 'x'},
        {'x', ' ', 'x', ' ', 'x', ' ', 'x', ' '},
        {' ', 'x', ' ', 'x', ' ', 'H', ' ', 'x'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'H', 'B', 'Q', 'K', 'B', ' ', 'R'}
    };
    for ( i = 0; i < 8; i++ ) {
        for ( j = 0; j < 8; j++ ) {
            printf("%c", move_KN_chessboard[i][j]);
            if (j == 7){
                printf("\n");
            }
        }
    }

    return 0;
}
