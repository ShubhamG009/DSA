#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *next;
}*start,*node1,*node2,*node3,*node4,*node5;
typedef struct node N;
N* sorted = NULL;
void print_list(N *start)
{
    while(start != NULL)
    {
        printf("%d -> ",start->info);
        start = start->next;
    }
}



// void sortedInsert(N* newnode)
// {
//     if (sorted == NULL || sorted->info >= newnode->info) {
//         newnode->next = sorted;
//         sorted = newnode;
//     }
//     else {
//         struct node* current = sorted;
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
 
//     N* current = start;
//     while (current != NULL) {
//         N* next = current->next;
//         sortedInsert(current);
//         current = next;
//     }
//     start = sorted;
// }


int main()
{
    start = (N *)malloc(sizeof(N));
    start -> info = 1;

    node1 = (N *)malloc(sizeof(N));
    node1->info = 9;
    start -> next = node1;

    node2 = (N *)malloc(sizeof(N));
    node2 -> info = 2;
    node1->next = node2;

    node3 = (N *)malloc(sizeof(N));
    node3 ->info = 8;
    node2 -> next = node3;

    node4 = (N *)malloc(sizeof(N));
    node4 -> info = 3;
    node3 -> next = node4;

    node5 = (N *)malloc(sizeof(N));
    node5 -> info = 7;
    node4->next = node5;
    node5 -> next = NULL;

    insertionsort(start);

    print_list(start);
}
