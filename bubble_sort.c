// 2003.08.20
//  bubble sort

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DATA_SIZE 20

int main()
{
    int data[DATA_SIZE];

    srand(time(NULL));
    int i;

    printf("Before sorting:\n");
    for (i = 0; i < DATA_SIZE; i++)
    {
        data[i] = rand() % 100;
        printf("%-5d", data[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    printf("\n\n");

    printf("After sorting:\n");
    int j, temp;
    for (i = 1; i < DATA_SIZE; i++)
    {
        for (j = 0; j < DATA_SIZE-i; j++)
        {
            if (data[j] > data[j + 1])
            {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < DATA_SIZE; i++)
    {
        printf("%-5d", data[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    printf("\n");
}