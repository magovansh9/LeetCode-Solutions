#include <iostream>
#include <vector>
using namespace std;

// Given: An array and a target
// To Do: Return index of target

// My Solution
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        if (nums[nums.size() - 1] < target)
        {
            return nums.size();
        }

        else if (nums[nums.size() - 1] == target)
        {
            return nums.size() - 1;
        }

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
            else if (nums[i] < target && nums[i + 1] > target)
            {
                return i + 1;
            }
        }

        return 0;
    }
};
