#include<stdio.h>

int main()
{
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element : ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int n = 0,temp;
    int s = size / 2;
    for(int j = size - 1; j >= s; j--)
    {
            temp = arr[n];
            arr[n] = arr[j];
            arr[j] = temp;
            n++;
    }

    for(int k = 0; k < size; k++)
    {
        printf("%d",arr[k]);
    }

}