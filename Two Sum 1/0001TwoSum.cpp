#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        map<int, int> mpp;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            int a = nums[i];
            int need = target - a;
            if (mpp.find(need) != mpp.end())
            {
                ans.push_back(mpp[need]);
                ans.push_back(i);
            }
            mpp[a] = i;
        }
        return ans;
    }
};