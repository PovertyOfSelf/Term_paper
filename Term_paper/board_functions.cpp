#include <stdio.h>

//��� ��������� ����� � �������:
//
// 1 * * * * *
// 2 * * * * *
// 3 * * @ * *
// 4 * * * * *
// 5 * * * * *
//   a b c d e
//
//���� ��� ���� ����� ����
//�� ������� ���������

void create_board(char board[6][6], int coordinates_columns[])
{
    ////���������� ������� ���������
    //for (int i = 0; i < 5; i++)
    //{
    //    coordinates_columns[i] = i + 1;
    //}
    ////���������� ������� ����� (� ������� ������ ��� �� ����������)
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

//��������� ������ ��������� ����� � �������
//��� �� ������� ���������� �����
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