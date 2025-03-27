#include<stdio.h>
#define size 5
void print();
void push();
int pop();


int Top = -1;
int Stack_arr[5];
int main()
{
	int i,data,value;
	for(i = 0; i < size; i++)
	{
		printf("Enter (%d) element :",i+1);
		scanf("%d",&data);
		push(data);
	}
	value = pop();
	printf("%d element is deleted :",value+1);
	print();

}

void print()
{
	if(Top == -1)
	{
		printf("Stack is Underflow :");
		return;
	}
	for(int i = Top; i >= 0; i--)
	{
		printf("%d  ",Stack_arr[i]);
	}
}

void push(int data)
{
	if(Top == size-1)
	{
		printf("Stack is empty :");
		return;
	}
	else
	{
		Top = Top + 1;
		Stack_arr[Top] = data;
	}
}
int pop()
{
	int value;
	if(Top == -1)
	{
		printf("stack underflow : ");
		return 0;
	}
	value = Top;
	Top = Top - 1;
	return value;
}
