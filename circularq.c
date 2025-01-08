#include<stdio.h>
#define MAX_SIZE 6
int A[MAX_SIZE],front=-1,rear=-1;
void enqueue(int item)
{
if(front==-1&&rear==-1)
{
front=0;
rear=0;
A[rear]=item;
}
else if((rear+1) % MAX_SIZE == front)
printf("Queue is FULL!!Insertion is not possible.");
else
{
rear=(rear+1)%MAX_SIZE;
A[rear]=item;
}
}
void dequeue()
{
if(front==-1&rear==-1)
{
printf("Queue is Underflow");
}
else if(rear==front)
{
printf("Dequeued %d",A[front]   );
front=rear=-1;
}
else
{
printf("Dequeued %d",A[front]);
front=front+1%MAX_SIZE;
}
}
void display()
{
int i=front;
if(front==-1&&rear==-1)
{
printf("\nQueue is empty");
}
else
{
printf("Elements in  Queue are:");
while(i<=rear)
{
printf("%d\t",A[i]);
i=(i+1)%MAX_SIZE;
}
}
}

void main()
{
int item,opt,front=-1,rear=-1;

do{

printf("\n1.ENQUEUE\n");
printf("\n2.DEQUEUE\n");
printf("\n3.DISPLAY\n");
printf("\n4.EXIT\n");
printf("\nEnter the option\n:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("\nEnter the item to enqueue:");
       scanf("%d",&item);
       enqueue(item);
       break;
case 2:dequeue();
       break;
case 3:display();
       break;
case 4:break;
default:printf("Invalid option.....!!");
}
}while(opt!=4);
}


