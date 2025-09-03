#include <stdio.h>

void bubbleSort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[10] = {64, 34, 25, 12, 22, 11, 90, 88, 76, 45};
    int size = 10;
    bubbleSort(arr, size);
    printf("Sorted array: \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
