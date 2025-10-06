#include<stdio.h>
#include<stdlib.h>

int *queue;
int front=-1;
int rear=-1;
int size;

void enqueue(int value) {
	if(rear== size-1) {
		printf("queue is full!\noverflow condition!\n");
	} else {
		if(front==-1) {
			front=0;
		}
		rear++;
		queue[rear]=value;
		printf("%d is inserted in queue\n ", value);
	}
}

void dequeue()  {
	if(front==-1 || front > rear) {
		printf("queue is empty!\nunderflow condition\n");
	} else {
		printf("%d is removed from queue\n",queue[front]);
		front++;
	}
}

void display() {
	if(front==-1||front>rear) {
		printf("QUEUE IS EMPTY!\n");
	} else {
		printf("following os the queue\n");
		for(int i=front; i<=rear; i++) {
			printf("%d  ",queue[i]);
		}
		printf("\n");
	}
}

int main() {

	int choice;
	int value;

	printf("enter the size of queue \n");
	scanf("%d",&size);
	queue=(int *)malloc(size * sizeof(int));

	if(queue==NULL) {
		printf("memory allocation  failed!\n");
		return 1;
	}
	else {

		printf("\n----queue menu----\n");
		while(1) {
			printf("1-> enqueue\n2-> dequeue\n3-> display\n4-> exit");
			printf("\n");
			printf("\nenter your choice : ");
			scanf("%d",&choice);

			switch(choice) {

			case 1:
				printf("enter the value you want to enqueue\n");
				scanf("%d",&value);
				enqueue(value);
				break;

			case 2:
				dequeue();
				break;

			case 3:
				display();
				break;

			case 4:
				free(queue);
				return 0;

			default:
				printf("invalid choice !\nenter correct choice.\n");

			}

		}


	}
}
























