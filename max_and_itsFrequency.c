#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int max, frequency = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            frequency = 1
        }
        else if (arr[i] == max)
        {
            frequency++;
        }
    }
    printf("The maximum element is: %d\n", max);
    printf("The frequency of the maximum element is: %d\n", frequency);
    return 0;
}