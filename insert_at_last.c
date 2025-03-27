#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *next;
}*start,*node,*node2,*P;

typedef struct node N;

void print_list(N *start)
{
    while(start != NULL)
    {
        printf("%d  ",start->info);
        start = start->next;
    }
}

void insert_l(N* start ,int data)
{
    N *loc;
    P = (N*)malloc(sizeof(N));
    P->info = data;
    P->next = NULL;

    if(P== NULL)
    {
        printf("OVERFLOW :");
    }
    else{
        if(start == NULL)
        {
            start = P;
        }
        else
        {
            loc = start;
            while(loc->next != NULL)
            {
                loc = loc->next;
            }
            loc->next = P;
        }
    }
}

int main()
{
    start = (N *)malloc(sizeof(N));

    printf("Enter 1st element :");
    scanf("%d",&start->info);
    start->next = NULL;

    node = (N *)malloc(sizeof(N));

    printf("Enter 2nd element :");
    scanf("%d",&node->info);
    node->next = NULL;

    start->next = node;
    
    node2 = (N *)malloc(sizeof(N));

    printf("Enter 3st element :");
    scanf("%d",&node2->info);
    node2->next = NULL;
    
    node->next = node2;

    int data;
    printf("Enter element that insert :");
    scanf("%d",&data);
    insert_l(start,data);
    printf("The linklist is :\n");
    print_list(start);
}