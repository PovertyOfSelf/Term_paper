#include <stdio.h>
#include "board_functions.h"

int main(int argc, char const* argv[]) 
{
    char choice[3];
    printf_s("Введите размер шахматной доски: (в формате x*y)");
    scanf_s("%s", &choice, 3);
    if (choice[0] <= 49 && choice[0] >= 56 && choice[0] <= 49 && choice[0] >= 56)
    return 0;
}
