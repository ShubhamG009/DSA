#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *next;
}*start,*p;

typedef struct node N;

void print_list(N *start)
{
	while(start != NULL)
	{
		printf("%d  ",start->info);
		start = start->next;
	}
}
void insert(int data)
{
	p = (N*)malloc(sizeof(N));
	p->info = data;
	if (start == NULL)
	{
		p->next = NULL;
	}
	else
	{
		p -> next = start;
	}
	start = p;
}

int main()
{
	start = (N*)malloc(sizeof(N));
	
    printf("Enter 1st element : ");
    scanf("%d",&start->info);
	start->next = NULL;
	
	start->next = (N*)malloc(sizeof(N));
	
	printf("Enter 2nd element : ");
    scanf("%d",&start->next->info);
	start->next->next = NULL;
	
    int data;
    printf("Enter element that you want to insert :");
    scanf("%d",&data);
	
    insert(data);
	print_list(start);
	
	
}
