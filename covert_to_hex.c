// 2003.08.20
//  input x,
//  x >0 and x is an integer
//  convert x to hex form

#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    printf("Input a positive integer: ");
    scanf("%d", &number);

    int num_binary = (int)log2(number) + 1;    //  2進位的位數
    int num_hex = ceil((float)num_binary / 4); // 16進位的位數

    int hex[num_hex];
    int i = 0;

    while (number > 0)
    {
        hex[i] = number & 15;
        i++;
        number >>= 4;
    }

    printf("hex form = 0x");
    for (i = num_hex - 1; i >= 0; i--)
    {
        switch (hex[i])
        {
        case 0 ... 9:
            printf("%d", hex[i]);
            break;
        case 10 ... 15:
            printf("%c", hex[i] + 55);
            break;
        }
    }
    printf("\n");
}
