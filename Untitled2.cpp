#include<iostream>
using namespace std;
int main()
{
	int arr[] = {1,2,3,4,5};
	int i,j;
	int s = 10;
	int n = 5;
	for( i = 0; i < n; i++)
        {
        	int sum  = arr[i];
            for( j = 1; j<n; j++)
            {
                int sum = 0;
    			sum = sum + arr[j];
                if(sum == s)
                {
                    cout<<"The sum of elements from "<< i <<" to "<< j <<" position ";
                }
            }
        }
	
}
