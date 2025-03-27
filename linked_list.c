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

int main()
{
	start = (N*)malloc(sizeof(N));
	
	start->info = 10;
	start->next = NULL;
	
	start->next = (N*)malloc(sizeof(N));
	
	start->next->info = 20;
	start->next->next = NULL;
	
	p = (N*)malloc(sizeof(N));
	
	if(p == NULL)
	{
		print("OVERFLOW :");
	}
	else
	{
		if(start == NULL)
		{
			p->info = 10;
			p->next = NULL;
			start = p;
		}
		else
		{
			p->info = 30;
			p->next = start;
			start = p;
		}
	}
	
	print_list(start);
	
	
}

