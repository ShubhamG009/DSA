#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *next;
}*start,*node1,*node2,*node3,*node4,*p;

typedef struct node N;

void print_L(N *start)
{
    while(start != NULL){
        printf("%d ",start -> info);
        start = start->next;
    }
}

void insert_l(int data){

    N *loc;
    p = (N*)malloc(sizeof(N));
    p->info = data;
    p->next = NULL;

    if(start==NULL){
        start = p;
    }
    else{
        loc = start;
        while(loc->next != NULL)
        {
            loc = loc->next;
        }
        loc->next =p;
    }
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

    int data;
    printf("\nEnter element that you want to insert :");
    scanf("%d",&data);

    insert_l(data);

    print_L(start);
}
