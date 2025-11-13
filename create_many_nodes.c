
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
void insert_at_pos() {
	struct node * temp = (struct node *)malloc(sizeof(struct node));
	if(temp==NULL) {
		printf("memory allocation failed!\n");
		return;
	} else {
		int pos ;
		printf("enter the position where you want to insert\n");
		scanf("%d",&pos);
		if(pos<=0) {
			printf("invalid position !\n");
			free(temp);
			return;
		} else {
			printf("enter the value\n");
			scanf("%d",&temp->data);
			temp->next=NULL;

			if(pos==1 || head ==NULL) {
				temp->next=head;
				head = temp ;
				printf("Element %d successfully inserted at position 1\n", temp->data);
				return ;

			} else {
				struct node * temp1;
				temp1 = head ;
				for(int i = 1 ; i< pos-1 && temp1->next != NULL ; i++) {
					temp1= temp1->next;
				}
				temp->next= temp1->next;
				temp1->next= temp ;
				printf("element %d successfully enterd at %d",temp->data,pos);
			}

		}
	}
}

void insert_after_pos() {
	struct node * temp = (struct node *)malloc(sizeof(struct node));
	if(temp==NULL) {
		printf("memory allocation failed!\n");
		return;
	} else {
		int pos ;
		printf("enter the position where you want to insert\n");
		scanf("%d",&pos);
		if(pos<=0) {
			printf("invalid position !\n");
			free(temp);
			return;
		} else {
			printf("enter the value\n");
			scanf("%d",&temp->data);
			temp->next=NULL;

			if (head == NULL) {
				printf("List is empty! Cannot insert after position %d.\n", pos);
				free(temp);
				return;
			}

			else {
				struct node * temp1;
				temp1 = head ;
				int i;
				for( i = 1 ; i< pos && temp1->next != NULL ; i++) {
					temp1= temp1->next;
				}

				if(temp1->next == NULL && i < pos) {
					printf("Position %d exceeded list length so  inserting at end.\n", pos);
				}

				temp->next= temp1->next;
				temp1->next= temp ;
				printf("element %d successfully enterd after position %d",temp->data,pos);
			}

		}
	}

}

void insert_before_pos() {
	struct node * temp = (struct node *)malloc(sizeof(struct node));
	if(temp==NULL) {
		printf("memory allocation failed!\n");
		return;
	} else {
		int pos ;
		printf("enter the position where you want to insert\n");
		scanf("%d",&pos);
		if(pos<=0) {
			printf("invalid position !\n");
			free(temp);
			return;
		} else {


			printf("enter the value\n");
			scanf("%d",&temp->data);
			temp->next=NULL;

			if (head == NULL) {
				printf("List is empty! Cannot insert before position %d.\n", pos);
				free(temp);
				return;
			}

			else {
				if (pos == 1) {
					temp->next = head;
					head = temp;
					printf("Element %d successfully inserted at the beginning (before position 1)\n", temp->data);
					return;
				} else {
					struct node * temp1;
					temp1 = head ;
					temp1 = head ;
					int i ;
					for( i = 1 ; i< pos-1 && temp1->next != NULL ; i++) {
						temp1= temp1->next;
					}

					if(temp1->next == NULL && i < pos) {
						printf("Position %d exceeded list length so  inserting at end.\n", pos);
					}

					temp->next= temp1->next;
					temp1->next= temp ;
					printf("element %d successfully enterd at %d",temp->data,pos);
				}

			}
		}
	}

}


