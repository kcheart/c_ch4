// 2023.08.18
// while loop example: 輾轉相除法-求兩正整數最大公因數 gcd
// Euclidean algorithm

#include <stdio.h>

int main()
{
    int a, b, r, gcd;

    printf("輸入第1個正整數: ");
    scanf("%d", &a);
    printf("輸入第2個正整數: ");
    scanf("%d", &b);
    printf("(%d, %d)= ", a, b);

    r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    gcd = b;
    printf("%d\n", gcd);

    return 0;
}