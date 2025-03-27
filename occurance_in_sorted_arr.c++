#include <bits/stdc++.h> 
using namespace std;

int FirstOcc(vector<int>& arr, int n, int k)
{
        int low = 0;
        int high = n-1;
        int ans = -1;
    while(low <=  high)
    {
         int mid = low + (high - low)/2;
         if (arr[mid] == k)
        {
            ans = mid;
            high = mid -1;
        }
        else if(arr[mid] > k)
        {
            high = mid -1;
        }
        else if(arr[mid] < k)
        {
            low = mid+1;
        }

    }
    return ans;
}
int lastOcc(vector<int>& arr, int n, int k)
{
        int low = 0;
        int high = n-1;
        int ans = -1;
        while(low <= high)
        {
             int mid = low + (high - low)/2;
            if (arr[mid] == k)
            {
                ans = mid;
                low = mid + 1;
            }
            if(arr[mid] > k)
            {
                high = mid -1;
            }
            else if (arr[mid] < k)
            {
                low = mid + 1;
            }

        }
        return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int>p;
    p.first =  FirstOcc(arr, n, k);
    p.second = lastOcc(arr,n,k);
    cout<<p.first<<endl;//first occurance of the key
    cout<<p.second<<endl;//last occurance of the key
    cout<<(p.second - p.first)+1;//total occurance of the key
    

}

int main()
{
    vector<int>arr = {1,2,3,3,5};
    firstAndLastPosition(arr, 5,3);

}

// 2
// 0
// 1
// 2
// 3
// 4
// 23