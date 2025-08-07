#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> &nums)
{
    int n = nums.size();
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }
    return max;
}

int secondLargest(vector<int> &nums)
{
    int largest = -1;
    int slargest = -1;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > largest)
        {
            slargest = largest;
            largest = nums[i];
        }
        if (nums[i] > slargest && nums[i] < largest)
        {
            slargest = nums[i];
        }
    }
    return slargest;
}

bool checkarrayShorted(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            count++;
        }
        else if (nums[n - 1] > nums[0])
        {
            count++;
        }
    }
    if (count <= 1)
    {
        return true;
    }
    return false;
}
int main()
{
    vector<int> nums = {
        1,
        2,
        3,
        4,
        5,
    };
    // cout << largestElement(nums) << endl;
    // cout << secondLargest(nums) << endl;
    cout << checkarrayShorted(nums) << endl;

    return 0;
}