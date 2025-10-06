#include<stdio.h>
#include<stdlib.h>

int *queue;
int front=0,rear=0;
int size;

int isEmpty() {
	return front==rear;
}

int isFull() {
	return (rear+1)%size == front;
}

void enqueue(int value) {
	if(isFull()) {
		printf("queue is full \n");
	}
	else {
		queue[rear]=value;
		rear=(rear+1)%size;
		printf("%d is entered in queue\n",value);
	}
}

void dequeue() {
	if(isEmpty()) {
		printf("queue is empty\n");
	}
	else {
		printf("%d is removed\n",queue[front]);
		front=(front+1)%size;
	}
}

void display() {
	if(isEmpty()) {
		printf("queue is empty\n");
		return;
	} else {
		int i =front;
		while(i != rear) {
			printf("%d  ",queue[i]);
			i=(i+1)%size;
		}
		printf("\n");

	}
}

int main() {
	int val,choice;
	printf("enter the size of queue\n");
	scanf("%d",&size);
	size++;
	queue =(int *)malloc(size * sizeof(int));

	if(queue==NULL) {
		printf(("memory not allocated!\n"));
		return 1;
	} else {
		while(1) {
			printf("\n--queue menu--\n");
			printf("1 enqueue\n2 dequeue\n3 display\n4 exit");
			printf("\nenter choice\n");
			scanf("%d",&choice);

			switch(choice) {
			case 1:
				printf("enter the value you want to enqueue\n");
				scanf("%d",&val);
				enqueue(val);
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


















