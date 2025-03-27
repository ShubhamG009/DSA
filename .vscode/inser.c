#include<stdio.h>

int main()
{
	int i,len;
	printf("Enter size of array :");
	scanf("%d",&len);
	int a[len];
	printf("insert element :\n");
	for(i=0; i<len-1; i++)
	{
		scanf("%d",&a[i]);
	}
	int pos,val;
	printf("ENter a position :");
	scanf("%d",&pos);
	printf("Enter element :");
	scanf("%d",&val);
	
	for(i=len; i>=pos; i--)
	{
		a[i+1] = a[i];	
	}
	a[pos] = val;
	for(i=0; i<len; i++)
	{
		printf("%d  ",a[i]);
	}
}