// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int *stack;
int size;
int top = -1;
void push(int value)
{
    if (top == size - 1)
    {
        printf("stack overflow\n");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d pushed \n", value);
    }
}
void pop()
{
    if (top == -1)
    {
        printf("stack underflow\n");
        return;
    }
    else
    {
        int poppedValue = stack[top];
        if (poppedValue == 10)
        {
            int count = 0;
            int j = 0;
            if (top - 4 < 0)
            {
                printf("no further popping is possible\n");
                exit(1);
            }
            for (j = top; j >= top - 4; j--)
            {
                if (stack[j] == 10)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (count < 5)
            {
                if (j >= 0)
                {
                    swap(&stack[top], &stack[j]);
                    poppedValue = stack[top];
                }
            }
        }
        printf("%d is popped", poppedValue);
        top--;
    }
}
void display()
{
    if (top == -1)
    {
        printf("underflow condition\n");
        return;
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
int main()
{
    int choice, value;
    printf("enter the size of the stack\n");
    scanf("%d", &size);

    stack = (int *)malloc(size * sizeof(int));
    if (stack == NULL)
    {
        printf("MEMORY ALLOCATION FAILED !!!!!!\n");
        return 1;
    }
    else
    {

        while (1)
        {

            printf("\n-----STACK MENU-----\n");
            printf("1 insert\n2 pop\n3 display\n4 exit\n");
            printf("enter your choice\n");
            scanf("%d", &choice);

            switch (choice)
            {

            case 1:
                printf("enter the element you want to push : ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                free(stack);
                return 0;

            default:
                printf("incorrect choice !\nenter correct choice from the menu\n");
            }
        }
    }

    return 0;
}