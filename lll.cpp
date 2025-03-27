#include<stdio.h>

struct node{
	int data;
	struct node *next;
	struct node *prev;
}*start,*node1,node2;

typedef struct node N;

int main()
{
	start = malloc(sizeof(N));
	start->prev = NULL;
	start->data = 10;

	
	node1 = malloc(sizeof(N));
	node1->prev = start;
	node1->data = 10;
	start->next = node1;
	
	node2 = malloc(sizeof(N));
	node2->prev = node1;
	node2->data = 20;
	node2->next = start;
	node1->next = node1;
	
	print(N *start)
	
	
}

void print()
{
	N* ptr;
	ptr = start;
	while(ptr!=NULL)
	{
		printf("%d  ",ptr->data);
	}
}

