#include <stdio.h>
#include <stdlib.h>

struct data
{
    int rollnum;
    char name[20];
    int marks;
};
int n;
struct data arr[100];

void getting_info()
{
    if (n > 100)
        n = 100;
    for (int i = 0; i < n; i++)
    {
        printf("\nenter the record of student[%d]", i);
        printf("\nroll num : ");
        scanf("%d", &arr[i].rollnum);
        printf("\nname : ");
        scanf("%s", arr[i].name);
        printf("\nmarks : ");
        scanf("%d", &arr[i].marks);
    }
}

void printing_info()
{
    if (n > 100)
        n = 100;
    printf("records of student\n");
    for (int i = 0; i < n; i++)
    {
        printf("student[%d]:\nroll num : %d name : %s marks : %d\n", i, arr[i].rollnum, arr[i].name, arr[i].marks);
    }
}

void sorting()
{
    for (int i = 0; i < n; i++)
    {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j].rollnum > arr[j + 1].rollnum)
            {

                struct data temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}

void bs(int rollnum)
{
    int beg = 0;
    int end = n - 1;
    while (beg <= end)
    {
        int mid = beg + (end - beg) / 2;
        if (arr[mid].rollnum == rollnum)
        {
            printf("\n%d found at %d and records are following\n", rollnum, mid);
            printf("name : %s", arr[mid].name);
            printf("marks : %d", arr[mid].marks);
            return;
        }
        else if (rollnum > arr[mid].rollnum)
        {
            beg = mid + 1;
        }
        else
            end = mid - 1;
    }
    printf("\n%d not found in the records", rollnum);
}

int main()
{
    printf("enter the size of array\n");
    scanf("%d", &n);
    getting_info();
    printing_info();
    sorting();
    printf("after sorting the records on the basis of roll num we have\n");
    printing_info();
    int roll;
    printf("enter the roll number you want to search\n");
    scanf("%d", &roll);
    bs(roll);

    return 0;
}