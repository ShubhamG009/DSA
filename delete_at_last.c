#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *next;
}*start,*node1,*node2,*node3,*node4,*p,*p1,*ptr;

typedef struct node N;

void print_L(N *ptr)
{
    while(ptr != NULL){
        printf("%d ",ptr-> info);
        ptr = ptr->next;
    }
}

N* deletion_last(N *start)
{
    if(start == NULL)
    {
        printf("Overflow :");
    }
    else if(start -> next == NULL)
    {
        free(start);
        start = NULL;
    }
    else
    {
        p = start;
        p1 = start->next;
        while(p1->next != NULL)
        {
            p1 = p1->next;
            p = p->next;
        }
        p -> next = NULL;
        free(p1);  
        p1 = NULL;
    }
    return start;
}

int main()
{
    start = (N*)malloc(sizeof(N));

    printf("Enter 1st element :");
    scanf("%d",&start -> info);
    start -> next = NULL;

    node1 = (N*)malloc(sizeof(N));
    printf("Enter 2nd element :");
    scanf("%d",&node1 -> info);
    node1 -> next = NULL;

    start -> next = node1;

    node2 = (N*)malloc(sizeof(N));
    printf("Enter 3rd element :");
    scanf("%d",&node2 -> info);
    node2 -> next = NULL;

    node1 -> next = node2;

    node3 = (N*)malloc(sizeof(N));
    printf("Enter 4th element :");
    scanf("%d",&node3 -> info);
    node3 -> next = node4;

    node2 -> next = node3;

    node4 = (N*)malloc(sizeof(N));
    printf("Enter 5th element :");
    scanf("%d",&node4 -> info);
    node4 -> next = NULL;

    node3 -> next = node4;


    start = deletion_last(start);
    ptr = start;

    print_L(ptr);
}
