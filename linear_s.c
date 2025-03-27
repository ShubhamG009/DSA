#include<stdio.h>

int main()
{
	int n,i;
	printf("enter size of array :");
	scanf("%d",&n);
	printf("Enter elements :");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int s;
	printf("Enter element that you want to search:");
	scanf("%d",&s);
	
	L_search(a,n,s);
}

void L_search(int a[],int n,int s)
{
	int i,c=0;
	for(i=0; i<n; i++)
	{
		if(a[i] == s)
		{
			printf("Your element found at %d index :",i);
			c += 1;
		}
	}
	if(c==0){
		printf("Element not found :");
	}
	
	
}
