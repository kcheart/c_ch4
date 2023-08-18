// 2023.08.18
// while loop example: decimal to binary

#include <stdio.h>

int main()
{
    int n;
    printf("輸入一個正整數 n: ");
    scanf("%d", &n);

    printf("%d 轉成2進位表示法 = ", n);

    int i = 0; // 記算 n 在2進位，有幾位數
    while (n >> i != 0)
        i++;

    while (i > 0)
    {
        // (1 << (i-1)) equal to 2^(i-1)
        // use it as a mask to do `&` calculation with n
        // 然後得到 n 的2進位表示式的第 i 位數
        printf("%d", (n & (1 << (i - 1))) >> (i - 1));
        i--;
    }
    printf("\n");

    return 0;
}