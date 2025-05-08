#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        // It is a brute force approch time complexcity will be O(nlogn)
        int n = nums.size();
        vector<int> result;
        for (int i = 0; i < n; i++)
        {
            result.push_back(nums[i] * nums[i]);
        }
        sort(result.begin(), result.end());
        return result;
    }
    // This time complexcity is O(n)
    class Solutions
    {
    public:
        vector<int> sortedSquares(vector<int> &nums)
        {
            int n = nums.size();
            vector<int> result(n);
            int firstIndex = 0;
            int LastIndex = n - 1;
            int chnageState = n - 1;
            while (chnageState >= 0)
            {
                int FirstnumSq = nums[firstIndex] * nums[firstIndex];
                int SecondnumSqr = nums[LastIndex] * nums[LastIndex];
                if (FirstnumSq > SecondnumSqr)
                {
                    result[chnageState] = FirstnumSq;
                    firstIndex++;
                }
                else
                {
                    result[chnageState] = SecondnumSqr;
                    LastIndex--;
                }
                chnageState--;
            }
            return result;
        }
    };
};