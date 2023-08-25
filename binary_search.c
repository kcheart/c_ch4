// 2023.08.25
// binary search
// iteration method

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data[] = {2, 3, 5, 7, 11, 13, 17, 19};
    int number;

    printf("輸入一個整數: ");
    scanf("%d", &number);

    int i, mid;
    int left = 0;
    int right = 7;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (number == data[mid])
        {
            printf("「%d」位於資料中的第 %d 個位置\n", number, mid + 1);
            return 0;
        }
        else if (number > data[mid])
            left = mid + 1;
        else
            right = mid - 1;
    }
    printf("%d, not found.\n", number);
    return 0;
}