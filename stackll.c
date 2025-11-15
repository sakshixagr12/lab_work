#include <stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;
};
struct node * top = NULL;

int isEmpty(){
    return top==NULL;
}

void push(){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("overflow condition\n");
        return;
    }
    else {

        printf("enter the data to be pushed in the stack\n");
        scanf("%d",&temp->data);
        temp->next=top;
        top=temp;
        printf("%d pushed in the stack\n",temp->data);
      
        
        
    }
}

void pop(){
    if(isEmpty()){
        printf("underflow condition\n");
        return;
    } else {
        struct node * current = top ;
        printf("%d is deleted\n",current->data);
        top=top->next;
        free(current);
        
    }
}
void display(){
    if(isEmpty()){
        printf("stack is empty\n");
        return;
    } else {
        struct node * temp = top ;
        printf("top \n");
        while (temp!=NULL){
            printf("%d \n",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }}
        
int main(){
    int choice;
    while(1){
        printf("\n1.push\n2.pop\n3.isEmpty\n4.display\n5.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: if(isEmpty()){
                        printf("stack is empty\n");
                    } else {
                        printf("stack is not empty\n");
                    }
                    break;
            case 4: display();
                    break;
            case 5: exit(0);
            default: printf("invalid choice\n");
        }
    }
    return 0;
}