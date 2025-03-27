#include<stdio.h>
#include<stdlib.h>
void push();
void print();
void pop();

struct node
{
    int info;
    struct node *next;
}*newnode,*top;
int val;
typedef struct node N;

void push(int data)
{
    newnode = (N*)malloc(sizeof(N));
    newnode -> info = data;
    newnode -> next = NULL;

    newnode -> next = top;
    top = newnode;
}

void pop()
{
    if(top == NULL)
    {
        printf("Overflow ");
        exit(1);
    }
    else
    {
        val = top->info;
        N* temp = top;
        top = top->next;
        free(temp);
    }
}

void print()
{
    N* tempo = top;
    while(tempo != NULL)
    {
        printf("%d  ",tempo->info);
        tempo = tempo->next;
    }
}

int main()
{
    
    while(1)
        {
            int choise,data;
            printf("\nPlease select your choise \n");
            printf("1.Push Element : \n");
            printf("2.Pop element :\n");
            printf("3.Print element :\n");
            printf("4.Exit\n");
            scanf("%d",&choise);
            switch (choise)
            {
            case 1:
                printf("Enter Element : ");
                scanf("%d",&data);
                push(data);
                break;
                
            case 2:
                pop();
                printf("Deleted element is %d ",val);
                break;

            case 3:
                print();
                break;

            case 4:
                exit(1);

            default:
                printf("Please select valid choise");
                break;
            }
        }
        
}