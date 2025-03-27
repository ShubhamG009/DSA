#include<stdio.h>
#include<stdlib.h>
void push();
void print();
void pop();

struct node{

    int info;
    struct node *next;
}*start,*node1,*node2,*node3,*Top,*ptr;

typedef struct node N;

int main()
{
    Top = start;
    start = (N*)malloc(sizeof(N));

    start -> info = 10;
    start -> next = NULL;

    node1 = (N*)malloc(sizeof(N));

    node1 -> info = 20;
    node1 -> next = NULL;

    start -> next = node1;

    node2 = (N*)malloc(sizeof(N));

    node2 -> info = 30;
    node2 -> next = NULL;

    node1 -> next = node2;

    push(5);
    push(6);
    push(7);
    print(start);
    pop();
    pop();
    printf("\n");
    print(start);
}

void print(N* start)
{
    N* temp = Top;
    do{
        printf("%d   ",temp->info);
        temp = temp ->  next;
    }while(temp != NULL);

}

void push(int data)
{
    node3 = (N*)malloc(sizeof(N));

    node3 -> info =  data;
    node3 -> next = start;

    start = node3;
    Top = start;
}

void pop()
{
    ptr = Top;
    Top = Top -> next;
    free(ptr);   
    ptr = NULL;
}