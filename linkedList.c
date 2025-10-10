

#include <stdio.h>
#include <stdlib.h>

struct node {  //user defined data type

	int data;
	struct  node*next;

};

struct node*start=NULL;  //to check whether the  linked list is empty or not


void createLL();
void display();
void insertbeg();
void insertend();
void insertpos();

int main()

{
	do {

		printf("----print 0 for creation mode\n----print 1 to insert at beginning\n----print 2 to insert at end\n---print 3 to insert at any position\n---print 4 for delete\n----print 5 for display \n----print 6 for exit\n--->");
		int choice;
		scanf("%d",&choice);

		switch(choice) {
		case 0:
			printf("you are in creation mode\n");
			createLL();
			break;
		case 1:
			printf("you are insert at beginning mode\n");
			insertbeg();
			break;

			case 2:
			printf("you are insert at end mode\n");
			insertend();
			break;

			case 3:
			insertpos();
			break;
		case 4:
			printf("you are in delete mode\n");
			break;
			
		case 5:
			printf("you are in display mode\n");
			display();
			break;
		case 6:
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

void insertbeg() {
    struct node*temp2;
	int val;
	 temp2 = (struct node*)malloc(sizeof(struct node));
    if (temp2 == NULL) {
        printf("Memory could not be allocated\n");
		return;
    } else{

    printf("Enter the data to be inserted: ");
    scanf("%d", &val);
}  
    temp2->data = val;
    temp2->next = start;
	start=temp2;

	printf("node inserted at beginning");
    

}
void insertend(){
	struct node *temp2,*temp;
int value;
temp2=(struct node*)malloc(sizeof(struct node));
if(temp2==NULL){
printf("memory allocation failed\n");
return;
} else {
printf("enter the daata you want to insert : ");
scanf("%d",&value);
temp2->data=value;
temp2->next=NULL;

if(start==NULL){
start=temp2;
} else {
temp=start;
while(temp->next!=NULL){
temp=temp->next;
temp->next=temp2;
}
printf("node inserted at end\n");
}}}

void insertpos(){
	struct node * temp2 ,*temp;
int val,pos;
temp2=(struct node*)malloc(sizeof(struct node));
if(temp2==NULL){
printf("memory is not allocated\n");
return;
}else{
printf("enter value : ");
scanf("%d",&val);
temp2->data=val;
printf("enter position where u want to insert : ");
scanf("%d",&pos);
if(pos<=1 || start==NULL){
temp2->next=start;
start=temp2;
} else {
temp=start;
for(int i =1; i<pos-1&& temp->next!=NULL;i++){
   temp=temp->next;
}
temp2->next=temp->next;
temp->next=temp2;

printf("element is inserted at %d position ",pos);
}}

	



