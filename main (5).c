// stack operation using array

#include <stdio.h>
#include <stdlib.h>

int *stack;
int size;
int top=-1;

void push(int value) {
	if(top == size-1) {
		printf("stack overflow condition !\n");
	} else {
		top++;
		stack[top]=value;
		printf("%d is pushed into the stack\n",value);
	}
}

void pop() {
	if(top==-1) {
		printf("stack underflow condition!\n");
	} else {
		printf("%d is poped item\n",stack[top]);
		top--;
	}
}

void display() {
	if(top==-1) {
		printf("empty stack!\n");
	} else {
		printf("the stack is\n");
		for(int i =top ; i>=0; i--) {
			printf("%d\n",stack[i]);
		}

	}
}

int main()
{
	int choice, value;
	printf("enter the size of the stack\n");
	scanf("%d",&size);

	stack=(int *)malloc(size * sizeof(int));

	if(stack==NULL) {

		printf("MEMORY ALLOCATION FAILED !!!!!!\n");
		return 1;

	} else {

		while(1) {

			printf("\n-----STACK MENU-----\n");
			printf("1 insert\n2 pop\n3 display\n4 exit\n");
			printf("enter your choice\n");
			scanf("%d",&choice);

			switch(choice) {

			case 1:
				printf("enter the element you want to push : ");
				scanf("%d",&value);
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