#include<stdio.h>

int binarysearch(int a[],int val,int low,int high);

int main()
{
	int i,n;
	printf("Enter size of array :");
	scanf("%d",&n);

	int a[n],val;
	for(i=0; i<n; i++)
	{
		printf("Enter %d element :",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter search element :");
	scanf("%d",&val);

	int low = 0 , high = n - 1;
	int result = binarysearch(a,val,low,high);
	if(result == -1)
	{
		printf("Element not found :");
	}
	else
	{
		printf("Element found :");
	}
	
}

int binarysearch(int a[],int val,int low,int high)
{
	while(low <= high)
	{
		int mid = (low + high)/2;
		
		if(a[mid] == val)
		{
			return mid;
		}
		else if(a[mid] > val)
		{
			high = mid -1;
		}
		else if(a[mid] < val)
		{
			low = mid + 1;
		}
		else
		{
			low = mid+1;
		}
	}
    return -1;
	
}