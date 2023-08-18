// 2023.08.18
// function library: math.h
// decimal to binary
// log(), pow()

#include <stdio.h>
#include <math.h>

int main()
{
    int n, length;

    printf("輸入一個正整數: ");
    scanf("%d", &n);

    length = (int)log2(n) + 1;
    printf("%d 以2進位表示為: ", n);

    int i;
    for (i = length - 1; i >= 0; i--)
    {
        printf("%d", n / (int)pow(2, i));
        n = n % (int)pow(2, i);
    }
    printf("\n");

    return 0;
}