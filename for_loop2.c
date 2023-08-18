// 2023.08.17
// for loop example: Triangle 2
// nested loop
/* output:
1     *
2    ***
3   *****
4  *******
5 *********
*/

#include <stdio.h>
#define TRIANGLE_HEIGHT 5

int main()
{
    int i = 0, j = 0;

    for (i = 1; i <= TRIANGLE_HEIGHT; i = i + 1)
    {
        printf("%d\t", i);
        for (j = 1; j <= (TRIANGLE_HEIGHT - i); j = j + 1)
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
