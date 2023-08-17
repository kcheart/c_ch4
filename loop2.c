// 2023.08.17
// Triangle 2
/* output:
1     *
2    ***
3   *****
4  *******
5 *********
*/

#include <stdio.h>

int main()
{
    int i = 0, j = 0;

    for (i = 1; i <= 5; i = i + 1)
    {
        printf("%d ", i);
        for (j = 1; j <= (5 - i); j = j + 1)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j = j + 1)
        {
            printf("*");
        }
        for (j = 1; j < i; j = j + 1)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
