#include<stdio.h>
#include<stdio.h>

struct node{
    int info;
    struct node *next;
    struct node *prev;
}

void Singly_l()
{
    int choice2;
    printf("1.Creation .\n");
    printf("2.Insertion .\n");
    printf("3.deletion \n");
    printf("Enter your choise :");
    scanf("%d",&choice2);
    switch(choice2)
    {
        case 1: 
                creation_l();
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

    int choice1;
    printf("1.Singly linked list \n");
    printf("2.Circular linked list \n");
    printf("3.Doubly linked list \n");
    printf("Enter your choice :");
    scanf("%d",&choice1);
    switch(choice1)
    {
        case 1:

    }
    
}