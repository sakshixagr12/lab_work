

#include <stdio.h>
#include<stdlib.h>
struct  node {
	int data;
	struct node*next;
};


struct node*FRONT=NULL;
struct node*REAR=NULL;
void insert();
void display();
void delete();


int main() {
	do {
		printf("\nenter choice\n0 for inertion\n1 for deletion\n2 for display\n3 for exit\n --> ");
		int choice;
		scanf("%d",&choice);

		switch(choice) {
		case 0:
			printf("\nyou choose insertion\n");
			insert();
			break;
		case 1:
			printf("\nyou choose deletion\n");
			delete();
			break;
		case 2:
			printf("you choose display\n");
			display();
			break;
		case 3:
			printf("you exit !");
			getchar();
			exit(0);
		default:
			printf("invalid choice!");

		}
	}
	while(1);
	return 0;
}
void insert() {
	struct node *temp,*temp1;
	temp=FRONT;
	
	if(FRONT==NULL) {
		temp1=(struct node*)malloc(sizeof(struct node));
		
		if(temp1==NULL) {
			printf("memory not allocated");
		}
		
		else {
			printf("insert the data to be inserted\n");
			scanf("%d",&temp1->data);
			temp1->next=NULL;
			FRONT=temp1;
			REAR=temp1;
		}
	}
	
	else {
		temp1=(struct node *)malloc(sizeof(struct node));
		
		if(temp1==NULL) {
			printf("memory not allocated");

		}
		else {
			printf("\ninsert the data to be inserted\n");
			scanf("%d",&temp1->data);
			temp1->next=NULL;
			REAR->next=temp1;
			REAR=temp1;

		}
	}
}
void display() {
    
	struct node*temp;
	temp=FRONT;
	
	if(FRONT==NULL) {
		printf("queue is empty");
	}
	
	else {
		printf("\nSTART");
		
		while(temp!=NULL) {
			printf("-->%d",temp->data);
			temp=temp->next;
		}
		printf("-->REAR");
	}
}

void delete() {
	struct node*temp;
	temp=FRONT;
	
	if(FRONT==NULL) {
		printf("queue is already empty");
	} 
	else {
		printf("deleted node is %d",FRONT->data);
		FRONT=FRONT->next;

		free(temp);
	}
}




















