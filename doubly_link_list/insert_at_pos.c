#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int info;
    struct node *next;
} *start, *node1, *node2, *node3, *p, *P, *temp, *temp1, *ptr;

typedef struct node N;

void print_L(N* ptr)
{
    if(ptr == NULL)
    {
        printf("Empty list");
    }
    else
    {
        printf("\nIN forward direction :\n");
        while (ptr != NULL)
        {
            printf("%d  ", ptr->info);
            P = ptr;
            ptr = ptr->next;
        }
        printf("\nIn backward direction :\n");
        while (P != NULL)
        {
            printf("%d ", P->info);
            P = P->prev;
        }
    }
}

N* insert_at_pos(N* start, int pos)
{
    int data;
    printf("Enter insert element: ");
    scanf("%d", &data);
    node3 = malloc(sizeof(N));

    // Handle the case where the insertion is at the first position
    if (pos == 1)
    {
        node3->info = data;
        node3->prev = NULL;
        node3->next = start;

        if (start != NULL)
        {
            start->prev = node3;
        }

        start = node3;

        return start;
    }

    temp = start;

    while (pos > 1 && temp->next != NULL)
    {
        temp = temp->next;
        pos--;
    }

    if (pos < 1)
    {
        printf("Invalid position for insertion.\n");
        return start;
    }

    temp1 = temp->next;

    node3->info = data;
    temp->next = node3;
    node3->prev = temp;
    node3->next = temp1;

    if (temp1 != NULL)
    {
        temp1->prev = node3;
    }

    return start;
}

int main()
{
    start = malloc(sizeof(N));

    printf("Enter 1st element: ");
    scanf("%d", &start->info);
    start->prev = NULL;

    node1 = malloc(sizeof(N));

    printf("Enter 2nd element: ");
    scanf("%d", &node1->info);
    node1->prev = start;
    start->next = node1;

    node2 = malloc(sizeof(N));

    printf("Enter 3rd element: ");
    scanf("%d", &node2->info);
    node2->prev = node1;
    node1->next = node2;
    node2->next = NULL;

    start = insert_at_pos(start, 1); 
    ptr = start;
    print_L(ptr);

    return 0;
}
