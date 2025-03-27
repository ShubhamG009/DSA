#include<stdio.h>
#include<stdlib.h>
struct node* push();
struct node{
	int info;
	struct node *next;
};

typedef struct node N;

int main()
{
	int data;
	struct node* top = NULL;
	struct node* top1 = NULL;
	struct node* top2 = NULL;
	
	top = push(1,top);
	top = push(2,top);
	top = push(3,top);
	temp = pop(top);
	top = temp -> next;
	top1 = push(temp -> data,top1);
	
	print(top);
	
}


N* push(int data,struct node *top)
{
	N* node;
	node = (N*)malloc(sizeof(N));
	
	if(node == NULL)
	{
		printf("Stack Overflow :");
		exit(1);
	}
	
	node -> info = data;
	node->next = NULL;
	
	node -> next = top;
	top = node;
	
}

void print(N* top)
{
	N* temp;
	temp = top;
	if(temp == NULL)
	{
		printf("Stack underflow");
		exit(1);
	}
	else
	{
		while(temp != NULL)
		{
			printf("%d  ",temp->info);
			temp = temp -> next;
		}
	}
	return top;
}

void pop(struct node* top)
{
	N* temp;	
	temp = top;
	top = top -> next;
	return temp;
}


