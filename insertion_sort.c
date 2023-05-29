#include <stdio.h>

#define ARRAY_LENGTH 11

int main(void)
{
    int unsorted_array[ARRAY_LENGTH] = {1, 0, 4, 8, 10, 3, 9, 7, 2, 6, 5};

    for (int i = 0; i < ARRAY_LENGTH-1; i++)
    {
        int j = i;
            
        while (j >= 0 && unsorted_array[j] > unsorted_array[j + 1])    
        {
            int tmp = unsorted_array[j + 1];
            unsorted_array[j + 1] = unsorted_array[j];
            unsorted_array[j] = tmp;

            j--;
        }
    }

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        printf ("%i ", unsorted_array[i]);
    }
}