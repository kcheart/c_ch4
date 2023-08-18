// 2023.08.18
// while loop example: ball bouncing distance

#include <stdio.h>

int main()
{
    float height = 100, distance = 0;
    int i = 1;
    while (height > 0)
    {
        printf("%d\theight: %.10f\n", i, height);
        distance += height;
        height /= 2;
        distance += height;
        i += 1;
    }
    printf("\nTotal distance: %.10fm\n", distance);

    return 0;
}