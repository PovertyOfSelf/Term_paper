#include <stdio.h>

//Как выводится доска в консоль:
//
// 1 * * * * *
// 2 * * * * *
// 3 * * @ * *
// 4 * * * * *
// 5 * * * * *
//   a b c d e
//
//пока все идет через жопу
//но пытаюсь исправить

void create_board(char board[6][6], int coordinates_columns[])
{
    ////Заполнение массива координат
    //for (int i = 0; i < 5; i++)
    //{
    //    coordinates_columns[i] = i + 1;
    //}
    ////Заполнение массива доски (в который входит так же координаты)
    //for (int i = 0; i < 5; i++)
    //{
    //    for (int j = 0; j < 5; j++)
    //    {
    //        if (i == 0)
    //        {
    //            board[i][j] = (char)(coordinates_columns[i]);
    //        }
    //        else if (i == 2 && j == 2)
    //        {
    //            board[i][j] = '@';
    //        }
    //        else
    //        {
    //            board[i][j] = '.';
    //        }
    //    }
    //}
 
}

//Процедура вывода шахматной доски в консоль
//Так же выводит координаты доски
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