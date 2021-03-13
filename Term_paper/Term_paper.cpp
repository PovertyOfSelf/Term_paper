#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <malloc.h>
#include "board_functions.h"

struct chess_knight 
{
    int x, y; // chess knight coordinates

};

int main(int argc, char const* argv[]) 
{
    int choice;
    bool your_choice_is_shit = true;
    setlocale(LC_ALL, "Russian");
    do
    {
        printf_s("Выберите игру: \n1) Обход шахматной доски\n2) Перестановки\n");
        scanf_s("%d", &choice);
        switch (choice)
        {
            case 1:
            {
                //case for chessboard traversal
                //claening the screen
                system("cls");
                // array of char for validation user choice
                int x, y;
                char** chessboard;
                printf_s("Введите размер шахматной доски: (5*5-8*8) \n");
                printf_s("x = ");
                scanf_s("%d", &x);
                printf_s("y = ");
                scanf_s("%d", &y);
                // validation of board size input
                // the dimensions must be the same, 
                // since the board is square 
                // according to the problem condition
                if (x <= 8 && x >= 5    //size of strings must be in segment [5;8]
                    && y <= 8 && y >= 5 //size of columns must be in segment [5;8]
                    && x == y)          //sizes must be the same         
                {
                    printf_s("Успешно введены верные координаты\n");
                    your_choice_is_shit = false;
                }
                else
                {
                    printf_s("Введены неверные координаты\n");
                }
                break;
            }
            case 2:
            {
                //case for permutations
                //claening the screen
                system("cls");
                printf_s("d");
                break;
            }
            default:
            {
                //case for invalid input
                //claening the screen
                system("cls");
                printf_s("Неверный ввод!");
                break;
            }
        }
    } while (your_choice_is_shit);
    
    return 0;
}
