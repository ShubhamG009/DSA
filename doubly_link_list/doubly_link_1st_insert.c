#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int info;
    struct node *next;
    
}*start,*node1,*node2,*node3,*p,*P;

typedef struct node N;

void print_L(N *start)
{
    if(start==NULL)
    {
        printf("Empty list");
    }
    else
    {
        printf("\nIN forwaord direction :\n");
        p = start;
        while (p != NULL)
        {
            printf("%d  ",p->info);
            P = p;
            p = p->next;
        }
        printf("\nIn backword direction :\n");
        while (P != NULL)
        {
            printf("%d ",P->info);
            P = P->prev;
        }
        
    }
}

void insert_at_1st()
{
    int data;
    printf("Enter insert element :");
    scanf("%d",&data);
    node3 = malloc(sizeof(N));
    node3->prev=NULL;
    node3 ->info = data;
    node3->next = start;

    if(start != NULL)
    {
          start -> prev = node3;
    }

    start=node3;
}

int main()
{
    start = malloc(sizeof(N));

    printf("Enter 1st element :");
    scanf("%d",&start->info);
    start->prev = NULL;

    node1 = malloc(sizeof(N));

    printf("Enter 2st element :");
    scanf("%d",&node1->info);
    node1->prev = start;
    start->next = node1;

    node2 = malloc(sizeof(N));

    printf("Enter 3st element :");
    scanf("%d",&node2->info);
    node2->prev = node1;
    node1->next = node2;
    node2 ->next = NULL;
    insert_at_1st(start);
    print_L(start);

}
