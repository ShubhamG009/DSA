#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *next;
}*start,*node,*node1,*node2,*node3,*p,*p1;

typedef struct node N;

void print_l(N *start){

    if(start == NULL)
    {
        printf("NULL");
    }
    else
    {
        while(start != NULL)
        {
            printf("%d  ",start->info);
            start = start -> next;
        }
    }
}

N* delete_pos(N* start)
{

    p = start;
    p1 = start;
    int i,pos;
    printf("Enter pos of deletion :");
    scanf("%d",&pos);

    if(start == NULL)
    {
        printf("List is empty :");
    }
    else
    {
        if(pos == 1)
        {
            start = start->next;
            free(p1);
            p1 = NULL;
        }
        else
        {
            for(i = 1; i < pos; i++)
            {
                    p = p1;
                    p1 = p1->next;
            }
            p->next = p1->next;
            free(p1);
            p1 = NULL;
        }
    }
    return start;

}

int main()
{
    int data;
    start = (N*)malloc(sizeof(N));
    printf("Enter 1st element :");
    scanf("%d",&data);
    start -> info = data;
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
    node3 -> next = NULL;

    node2 -> next = node3;


    start = delete_pos(start);
    print_l(start);

}