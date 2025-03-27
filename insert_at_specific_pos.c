#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *next;
}*start,*node1,*node2,*node3,*node4,*p;

typedef struct node N;
N* sorted = NULL;

void print_L(N *start)
{
    while(start != NULL){
        printf("%d ",start -> info);
        start = start->next;
    }
}

// void sortedInsert(struct node* newnode)
// {
//     /* Special case for the head end */
//     if (sorted == NULL || sorted->info >= newnode->info) {
//         newnode->next = sorted;
//         sorted = newnode;
//     }
//     else {
//         struct node* current = sorted;
//         /* Locate the node before the point of insertion
//          */
//         while (current->next != NULL
//                && current->next->info < newnode->info) {
//             current = current->next;
//         }
//         newnode->next = current->next;
//         current->next = newnode;
//     }
// }

// void insertionsort(N* start)
// {
 
//     struct node* current = start;
 
//     // Traverse the given linked list and insert every
//     // node to sorted
//     while (current != NULL) {
 
//         // Store next for next iteration
//         struct node* next = current->next;
 
//         // insert current in sorted linked list
//         sortedInsert(current);
 
//         // Update current
//         current = next;
//     }
//     // Update head to point to sorted linked list
//     start = sorted;
// }

// void insert_pos(N *start ,int data ,int pos)
// {
//     p = (N*)malloc(sizeof(N));
//     p->info = data;
//     N *loc;
//     loc = start;
//     int i=1;
//     while (i < pos-1)
//     {
//         loc = loc->next;
//         i++;
//     }
//     p->next = loc->next;
//     loc -> next = p;
    
// }

int arr[];
void 

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

    int data,pos;
    printf("Enter pos to insert element :");
    scanf("%d",&pos);
    printf("Enter element that you want to insert :");
    scanf("%d",&data);


    insert_pos(start,data,pos);
    print_L(start);
}
