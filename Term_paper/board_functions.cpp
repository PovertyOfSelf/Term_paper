#include <stdio.h>
#include <malloc.h>

// how the board is displayed in the console 
// (example for boardsize 5*5):
//
// 1 * * * * *
// 2 * * * * *
// 3 * * @ * *
// 4 * * * * *
// 5 * * * * *
//   a b c d e
//
// char for simbols in there:
// 
// * - 42
// 
// 1 - 49
// 2 - 50
// 3 - 51
// 4 - 52
// 5 - 53
// 6 - 54
// 7 - 55
// 8 - 56
// 
// @ - 64
// 
// a - 97
// h - 104
// 
// while everything goes through the ass
// but I'm trying to fix it

// procedure creating the board with size of a user
void create_board(char board[6][6], int coordinates_columns[], char coordinates_string[])
{
    //filling in an array of coordinates
    for (int i = 0; i < 5; i++)
    {
        coordinates_columns[i] = i + 1;
        printf_s("coordinates_columns[%d] = %d\n", i, coordinates_columns[i]);
    }
}

// procedure for displaying the chessboard in the console
// it also outputs the coordinates of the board
void print_borad(char board[6][6])
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf_s("%c ", board[i][j]);
        }
        printf_s("\n");
    }
}