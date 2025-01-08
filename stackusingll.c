#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
int data;
struct node *next;
};
struct node *top=NULL;
void push()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data:\t");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(newnode==NULL)
{
printf("Insufficient data");
}
else if(top==NULL)
{
top=newnode;
}
else
{
newnode->next=top;
top=newnode;
}
}
void pop()
{
struct node *ptr;
if(top==NULL)
printf("Stack is empty");
else
{
ptr=top;
top=top->next;
printf("deleted item is %d",ptr->data);
free(ptr);
}
}
void display(){
struct node *ptr;
if(top==NULL)
{
printf("Stack is empty");
}
else{
ptr=top;
while(ptr!=NULL){
printf("%d->",ptr->data);
ptr=ptr->next;}
printf("NULL");
}
}

int main()
{
int choice;
while(1)
{
printf("\nOperations:");
printf("\n1.PUSH");
printf("\n2.POP");
printf("\n3.DISPLAY");
printf("\n4.EXIT");
printf("\nEnter your choice:\t");
scanf("%d",&choice);
switch(choice)
{
case 1: push();
        break;
case 2: pop();
        break;
case 3: display();
        break;
case 4: exit(0);
        break;
default:printf("Wrong Choice");
}
}
}


