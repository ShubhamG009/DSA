#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *next;
}*start,*node1,*node2,*node3,*p,*p1;

typedef struct node N;

void print_l(N* start)
{
    p = start;
    do
    {
        printf("%d ",p->info);
        p = p->next;
    } 
    while (p != start);
}

N* insert_f(N* start)
{
    p1 = (N*)malloc(sizeof(N));
    
    int n;
    printf("Enter insert element :");
    scanf("%d",&n);
    p1->info = n;
    p1->next = NULL;
    p = start;
    if(p1==NULL)
    {
        printf("Overflow :");
    }
    else
    {
        if(start == NULL)
        {
            p1->info = n;
            p1->next = p1;
            start = p1;
        }
        else
        {
           while (p->next != start)
           {
                p = p->next;
           }
           p->next = p1;
           p1->next = start;
           start = p1;
           
        }
    }

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
    node1->next=NULL;
    start->next = node1;


    node2 = (N*)malloc(sizeof(N));
    printf("Enter 3rd element :");
    scanf("%d",&node2->info);
    node2 -> next = NULL;
    node1->next = node2;

    node3 = (N*)malloc(sizeof(N));
    printf("Enter 4th element :");
    scanf("%d",&node3->info);
    node3 -> next = NULL;
    node2->next = node3;

    node3->next = start;

    
    start = insert_f(start);
    print_l(start);


}