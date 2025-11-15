
#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node * next ;
};

struct node * head = NULL;

void create_node() {
	struct node * temp = (struct node *)  malloc(sizeof(struct node));
	if(temp==NULL) {
		printf("memory allocation failed !\n");
		return ;
	}
	else {
		printf("enter the data to be inserted \n");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(head==NULL) {
			head=temp;
		} else {
			struct node *p=head;
			while (p->next != NULL) {
				p = p->next;
			}
			p->next = temp;

		}
	}
}
void display() {
	if(head==NULL) {
		printf("nothing to display\n");
		return ;
	}
	struct node * temp=head;
	printf("head -> ");
	while(temp!=0) {
		printf("%d -> ",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}

void search(int val) {
	if(head==NULL) {
		printf("list is empty\n");
		return ;
	}
	struct node * temp = head ;
	int node = 1;
	while(temp!=NULL) {
		if(temp->data==val) {
			printf("%d found at %d node\n",val,node);
			return;
		}
		temp=temp->next;
		node++;
	}
	printf("Element not found!\n");
}

int main()
{
	int n ;
	printf("enter the size of linked list\n");
	scanf("%d",&n);
	if(n<=0) {
		printf("invalid size !\n");
		exit(1);
	}
	int i=1;
	while(i<=n) {
		create_node();
		i++;
	}
	display();
	int value;
	printf("\nenter the data you want to search\n");
	scanf("%d",&value);
	search(value);
	// Free all nodes before program ends
	struct node *temp;
	while(head != NULL) {
		temp = head;
		head = head->next;
		free(temp);
	}

	return 0;
}