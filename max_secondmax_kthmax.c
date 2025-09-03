#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int max, secondmax, kthmax, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = secondmax = kthmax = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {

            max = arr[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] > secondmax && arr[i] < max)
        {
            secondmax = arr[i];
        }
    }
    printf("The maximum element is: %d\n", max);
    printf("The second maximum element is: %d\n", secondmax);

    printf("Enter the value of k to find the kth maximum element: ");
    scanf("%d", &k);

    int temp for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    kthmax = arr[n - k];
    printf("The %dth maximum element is: %d\n", k, kthmax);
    return 0;
}