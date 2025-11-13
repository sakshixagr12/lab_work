
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

void insert_at_beg() {
	struct node * temp = (struct node *)malloc(sizeof(struct node));
	if ( temp ==  NULL) {
		printf ( " memory allocation failed !\n");
		return;
	}
	else {
	    printf("enter the value\n");
	    scanf("%d",&temp->data);
	    temp->next=head;
	    
	    head=temp;
	    printf("Node inserted at the beginning successfully.\n");
	}
}

void insert_at_end() {
    struct node * temp = (struct node *) malloc(sizeof(struct node));
    if(temp ==NULL){
        printf("memory allocation failed!\n");
        return;
    } else {
        struct node * temp1;
        printf("enter the data\n");
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(head == NULL) head=temp;
        else {
        struct node * temp1=head;
        while(temp1->next != NULL) {
            temp1 = temp1->next;
           
        }
            temp1->next= temp;
        }
        printf("element inserted at end successfully!\n");
        
    }
}
