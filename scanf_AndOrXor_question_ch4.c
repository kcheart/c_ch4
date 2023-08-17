// 2023.08.16
// chapter 4 question

#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("input 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a && b) == c)
        printf("AND\n");
    if ((a || b) == c)
        printf("OR\n");
    if (((a != 0) ^ (b != 0)) == c)
        printf("XOR\n");

    if (!(((a && b) == c) || ((a || b) == c) || (((a != 0) ^ (b != 0)) == c)))
        printf("IMPOSSIBLE\n");

    return 0;
}