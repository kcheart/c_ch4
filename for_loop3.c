// 2023.08.18
// for loop example: 9x9 table
// nested loop

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
            printf("%dx%d=%2d\t", i, j, i * j);
        printf("\n");
    }
    return 0;
}