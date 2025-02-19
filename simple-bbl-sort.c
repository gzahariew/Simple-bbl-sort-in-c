#include <stdio.h>

// A fuction that executes the logic of the sorting algorithm
void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Now let's log it
void print(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
}

int main()
{
    int array[] = {1, 4, 7, 2, 5, 3, 9, 6, 8, 0, 2, 1, 3, 4, 5, 7, 8, 5, 7, 0, 8, 6, 3, 1, 3, 0, 5, 3, 7, 3,2, 4,3, 4,5, 6,5, 6,7, 9,8, 1,2, 2};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    print(array, size);

    return 0;
}