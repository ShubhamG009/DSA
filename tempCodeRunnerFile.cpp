#include<stdio.h>
void push();
int pop();
void print();

int stack_arr[3],stack1_arr[3],stack2_arr[3];
int top = -1;
int main()
{
   push(1,stack_arr);
   push(2,stack_arr);
   push(3,stack_arr);
   print(stack_arr);
   
}

void push(int data,stack_arr[])
{
    top = top +1;
    stack_arr[top] = data;
}

int pop()
{
    int val = top;
    top = top -1;
    return val;
}

void print(int stack_arr[])
{
    for(int i = 2; i >= 0; i--)
    {
        printf("%d  ",stack_arr[i]);
    }
}