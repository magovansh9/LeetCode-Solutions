#include <iostream>
#include <vector>
using namespace std;

// Given: An array of nums
// To Do: Return the third max integer

// My Solution: INCORRECT

class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        int len = nums.size();

        sort(nums.begin(), nums.end());

        if (nums.size() == 2 || nums.size() == 1)
        {
            return nums[nums.size() - 1];
        }

        int max1{nums[len - 1]}, max2{INT_MIN}, max3{INT_MIN};

        for (int i = nums.size() - 2; i >= 0; i--)
        {
            if (nums[i] < max1 && nums[i] >= max2)
            {
                max2 = nums[i];
            }
            else
            {
                max3 = nums[i];
                break;
            }
        }
        return (max3 == INT_MIN) ? max1 : max3;
    }
};

// Correct Solution
class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        long max1 = LONG_MIN;
        long max2 = LONG_MIN;
        long max3 = LONG_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == max1 | nums[i] == max2 | nums[i] == max3)
                continue;
            if (nums[i] > max1)
            {
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            }
            else if (nums[i] > max2)
            {
                max3 = max2;
                max2 = nums[i];
            }
            else if (nums[i] >= max3)
            {
                max3 = nums[i];
            }
        }
        return max3 == LONG_MIN ? max1 : max3;
    }
};