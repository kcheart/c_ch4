// 2023.08.18
// K-interlaced string
// first method

#include <stdio.h>
#include <string.h>

void k_string_check(char string[], int k, int answer_check);

int main()
{

    k_string_check("aBBdaaa", 1, 2);
    k_string_check("DDaasAAbbCC", 3, 3);

    k_string_check("aafAXbbCDCCC", 2, 8);
    k_string_check("DDaaAAbbCC", 3, 0);

    k_string_check("x", 1, 0);
    k_string_check("xY", 1, 2);
    k_string_check("xYx", 1, 3);
    k_string_check("xx", 1, 0);
    k_string_check("xxY", 1, 2);
    k_string_check("xYxY", 1, 4);

    k_string_check("xxYY", 2, 4);
    k_string_check("xxxYYY", 3, 6);

    k_string_check("DDD", 3, 0);
    k_string_check("aaDaDD", 1, 4);

    k_string_check("aaDaD", 1, 4);
    k_string_check("DaDDaaDD", 2, 6);

    return 0;
}

void k_string_check(char string[], int k, int answer_check)
{
    int string_length = strlen(string);
    puts(string);

    int upper_lower[string_length];
    // convert string into 0, 1 array according to upper/lower case
    // upper: 1, lower: 0

    int serial_count[string_length];
    int serial_index = -1;
    int count = 1;
    int i;

    if (string_length > 1)
    {
        // convert string into 0, 1 array according to upper/lower case
        // upper: 1, lower: 0
        for (i = 0; i < string_length; i++)
            upper_lower[i] = (('A' <= string[i]) && (string[i] <= 'Z'));

        // count serial same digits into serial_count[]
        for (i = 1; i < string_length; i++)
        {
            if (upper_lower[i] == upper_lower[i - 1])
                count++;
            else
            {
                serial_index++;
                serial_count[serial_index] = count;
                count = 1;
            }
        }
        serial_index++;
        serial_count[serial_index] = count;

        for (i = 0; i <= serial_index; i++)
        {
            if (serial_index == 0)
                printf("{%d}\n", serial_count[i]);
            else if (i == 0)
                printf("{%d,", serial_count[i]);
            else if (i != serial_index)
                printf(" %d,", serial_count[i]);
            else
                printf(" %d}\n", serial_count[i]);
        }
    }
    else
        printf("{1}\n");

    // find k-interlaced string repeat times into k-max
    int k_max = 0;
    int sw = 0;

    count = 0;
    if (serial_index > 0)
    {
        for (i = 0; i <= serial_index; i++)
        {
            if (serial_count[i] == k)
            {
                count++;
                if (count == 1)
                    sw = i;
            }
            else
            {
                if (count > 0)
                {
                    if (sw > 0 && serial_count[sw - 1] > k)
                        count++;
                    if (serial_count[i] > k)
                        count++;
                    if (k_max < count)
                        k_max = count;
                }
                count = 0;
                sw = 0;
            }
        }
        if (count > 0)
        {
            if (sw > 0 && serial_count[sw - 1] > k)
                count++;
            if (k_max < count)
                k_max = count;
        }
    }
    printf("k = %d\n", k);
    printf("k-interlaced string (max) = %d\n", k_max * k);

    if (k_max * k == answer_check)
        printf("Equal to the answer!\n\n");
    else
        printf("No!!!!\n\n");
}