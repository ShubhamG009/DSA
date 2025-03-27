#include<iostream>

using namespace std;

class Sum{
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = sizeof(nums)/sizeof(nums[0]);
        for(int i = 0; i < len; i++)
        {
            for(int j = i+1; j < len; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    return nums[i],nums[j];
                }
            }
        }
    }
};

