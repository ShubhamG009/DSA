#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int search(int nums[], int target,int size) {
        int low = 0;
        int high = size;
        while(low < high)
        {
            int mid = (low + high)/2;
            
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(target > mid)
            {
                low = mid + 1;
            }
            else{
                high = mid-1;
            }
        }
        return -1;
    }
};

int main()
{
    int nums[5] = {1,3,4,2,5};
    Solution o1;
    int result = o1.search(nums,5,5);
    cout<<result;






    // // Approch first time complexity O(nlogn)
    // int slow = arr[0];
    // int fast = arr[0];

    // do{
    //     slow = arr[slow];
    //     fast = arr[arr[fast]];
    // }while(slow!=fast);
    // cout<<slow;
    // fast = arr[0];
    // while (slow != fast)
    // {
    //     slow = arr[slow];
    //     fast = arr[fast];
    // }
    // cout<<slow;

}