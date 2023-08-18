// 2023.08.18
// for loop example: a + a.a + a.aa + ... + a.aaaaaaaaaa
// a is a positive number from 1 to 9
// input a

#include <stdio.h>
#define DECIMAL_PLACES 10

int main()
{
    int a;
    double sum;

    printf("輸入1 ~ 9的整數數字: ");
    scanf("%d", &a);

    sum = a;
    int i;
    double j = 1.0;

    printf("\t%d\n", a);
    for (i = 1; i <= DECIMAL_PLACES; i++)
    {
        j = j / 10 + 1;
        sum += a * j;
        printf(" + \t%.*f\n", i, a * j);
    }
    printf(" = \t%.*f\n", DECIMAL_PLACES, sum);

    return 0;
}