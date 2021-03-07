#include <stdio.h>
#include "board_functions.h"

int main(int argc, char const* argv[]) 
{
    char board[6][6] = { {'1', '*', '*' , '*' , '*' , '*' }
                        ,{'2', '*', '*' , '*' , '*' , '*' }
                        ,{'3', '*', '*' , '@' , '*' , '*' }
                        ,{'4', '*', '*' , '*' , '*' , '*' }
                        ,{'5', '*', '*' , '*' , '*' , '*' } 
                        ,{ '  ', 'a', 'b', 'c', 'd', 'e'} };
    char coordinates_string[6] = { 'a', 'b', 'c', 'd', 'e', '\0' };
    int coordinates_columns[6];
    //create_board(board, coordinates_string, coordinates_columns);
    print_borad (board);
    return 0;
}
