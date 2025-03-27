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
	int pos;
	printf("ENter a position :");
	scanf("%d",&pos);
;
	
	for(i=pos; i<=len; i++)
	{
		a[i] = a[i+1];	
	}
	len = len -1;
	for(i=0; i<len; i++)
	{
		printf("%d  ",a[i]);
	}
}
