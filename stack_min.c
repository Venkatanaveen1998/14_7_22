#include<stdio.h>
#include<stdlib.h>
struct student
{
	int data;
	struct student *next;
};
void getmin();
struct student *top=NULL;
void push(int n)
{
	struct student *newnode=NULL;
	newnode=malloc(sizeof(struct student));
	if(newnode==NULL)
	{printf("it is full\n"); exit(1);}
	else
	{
		newnode->data=n;
		newnode->next=top;
                top=newnode;
	}
}
void print()
{
	struct student *temp=NULL;
	if(top==NULL)
		printf("stack is empty \n");
	temp=top;
	while(temp)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void pop()
{
	struct student *temp;
	if(top==NULL) {printf("no data is in stack \n"); exit(1);}
	getmin();
	temp=top;
	if(temp->next!=NULL)
	{
	top=temp->next;
	}
	free(temp);
}
void getmin()
{
	struct student *temp;int min=0;
	temp=top;
	min=temp->data;
	while(temp)
	{
		if(temp->data<min)
		     min=temp->data;
		temp=temp->next;
		
	}
	printf(" min = %d ",min);
}


int main()
{
	struct student *head;
	push(7);
	push(33);
	push(5);
	push(10);
	push(3);
	push(100);
	push(25);
	print();
	pop();
	pop();
	pop();
	pop();
	pop();
	printf("\n");
	print();
}

