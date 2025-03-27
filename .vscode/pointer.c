#include<stdio.h>
void swap(int a,int b);
int main()
{
	int a,b;
	printf("Enter value of a :");
	scanf("%d",&a);
	
	printf("Enter value of b :");
	scanf("%d",&b);
	
	swap(a,b);
	printf("\n%d,%d",a,b);
}

void swap(int a,int b)
{
	int t = a;
	a = b;
	b = t;
	printf("%d",a);
	printf("\n%d",b);	
}
