#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100

char stack[max];
char infix[max],postfix[max];
int top  = -1;

int main()
{
    printf("Enter the infix expression : ");
    gets(infix);

    printf("%d",strlen(infix));
}