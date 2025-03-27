#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
}*start,*node1,*node2,*p;

typedef struct node N;

void print_L(N* start){
    
    p = start;
    do
    {
        printf("%d ",p->info);
        p = p->next;
    } 
    while (p != start);
  
}

int main()
{
    start = (N*)malloc(sizeof(N));

    printf("Enter 1st element :");
    scanf("%d",&start->info);
    start->next = NULL;

    node1 = (N*)malloc(sizeof(N));

    printf("Enter 2nd element :");
    scanf("%d",&node1->info);
    node1->next = NULL;
    start->next = node1;

    node2 = (N*)malloc(sizeof(N));

    printf("Enter 3rd element :");
    scanf("%d",&node2->info);
    node2->next = NULL;
    node1->next = node2;

    node2->next = start;

    print_L(start);

}