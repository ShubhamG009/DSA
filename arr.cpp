#include<stdio.h>
int main()
{
	int a[] = {1,2,3,4,5},s;
	printf("Enter search element : ");
	scanf("%d",&s);
	
	int size = sizeof a / sizeof a[1];
	int i,low = 0,high = size-1;
	
	while(low <= high)
	{
		int mid = (low + high) / 2;
		if(s == a[mid])
		{
			printf("Element found :");
			break;
		}
		else if(s < a[mid])
		{
			low = mid + 1;
		}
		else
		{
			low = mid -1;
		}
	}
}
