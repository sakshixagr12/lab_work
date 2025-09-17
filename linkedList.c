

#include <stdio.h>
#include <stdlib.h>

struct node {  //user defined data type

	int data;
	struct  node*next;

};

struct node*start=NULL;  //to check whether the  linked list is empty or not


void createLL();
void display();
void insert();

int main()

{
	do {

		printf("----print 0 for creation mode\n----print 1 to insert\n----print 2 for delete\n----print 3 for display \n----print 4 for exit\n--->");
		int choice;
		scanf("%d",&choice);

		switch(choice) {
		case 0:
			printf("you are in creation mode\n");
			createLL();
			break;
		case 1:
			printf("you are in sort mode\n");
			break;
		case 2:
			printf("you are in delete mode\n");
			break;
		case 3:
			printf("you are in display mode\n");
			display();
			break;
		case 4:
			printf("you are in exit mode");
			getchar(); // "Pause everything and give me the next character from the input (usually the keyboard)."
			exit(0);  //indication of successful termination
		default:
			printf("enter correct choice");

		}
	} while(1);
	return 0;
}

void createLL() {

	int val;
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node)); // sizeof -->returns the size of struct node {different compiler -->different data type}
	if (temp==NULL) {
		printf("memory could  not be allocated");
	} else {
		printf("enter the data to  be inserted ---> ");
		scanf("%d",&val);
		temp->data=val;
		//scanf("%d",&temp->data)
		temp->next=NULL;
		start=temp; // temp is local variable , as the fucn end , temp will end.. so we are storing the memory address to start which is global variable


	}

}
void display() {
	struct node*temp1;
	temp1=start;
	while(temp1!=NULL) {
		printf("%d",temp1->data);
		temp1=temp1->next;
	}
}

void insert() {
    struct node*temp2;
	int val;
	 temp2 = (struct node*)malloc(sizeof(struct node));
    if (temp2 == NULL) {
        printf("Memory could not be allocated\n");
    } else{

    printf("Enter the data to be inserted: ");
    scanf("%d", &val);
}  
    temp2->data = val;
    temp2->next = NULL;
    

}



