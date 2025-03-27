#include<stdio.h>
#include<stdlib.h>
int Stack_arr[4];
int Top = -1;
int main()
{
	
	do
	{
		int choise;
		printf("1.PUSH :\n");
		printf("2.POP :\n");
		printf("3.TRAVERSE :\n");
		printf("4.EXIT :\n");
		printf("Enter your choise :");
		scanf("%d",choise);
		switch(choise)
		{
			case 1:
				printf("deleted element is %d",push());
				break;
			case 2:
				pop();
				break;
			case 3:
				traverse();
				break;
			case 4:
				exit(0);
		}
	while(choise!=4);
	}
}

void push()
{
	if(Top == 4-1)
	{
		printf("Stack is Overflow ");
		return;
	}
	int data;
	printf("Enter element :");
	scanf("%d",&data)''
	Top = Top + 1;
	Stack_arr[Top] = data;
	
}
int pop()
{
	if(Top == -1)
	{
		printf("Stack is Underflow :");
		exit(1);
	}
	int value = Stack_arr[Top];
	Top = Top-1;
	return value;
}
void print()
{
	if(Top == -1)
	{
		printf("Stack is underflow");
		return 0;
	}
	int i;
	for(i=Top; i>=0;i--)
	{
		printf("%d",Stack_arr[i]);
	}
}
void traverse()
{
	int i;
	for(i=Top; i>=0; i--)
	{
		printf("%d",Stack_arr[i]);
	}
}
