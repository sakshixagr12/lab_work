
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void create_many_nodes(int n)
{
    struct node *temp = NULL;
    struct node *newNode;
    for (int i = 1; i <= n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        if (newNode == NULL)
        {
            printf(" memory allocation failed !\n");
            return;
        }
        else
        {
            printf("enter the value \n");
            scanf("%d", &newNode->data);

            if (head == NULL)
                head = newNode;
            else
            {
                temp->next = newNode;
            }
            temp = newNode;
        }
    }