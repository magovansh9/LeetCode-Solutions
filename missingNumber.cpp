#include <iostream>
#include <vector>
using namespace std;

// Given: An array of integers of size n in the range [0,n]
// To Do: Find the missing number from the range

// My Solution
// Sort the array, if the difference of two consecutive numbers is greater than 1 return current num +1
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());

        if (nums[0] != 0)
        {
            return 0;
        }
        else if (nums[nums.size() - 1] != nums.size())
        {
            return nums.size();
        }
        else
        {
            for (int i = 0; i < nums.size() - 1; i++)
            {
                if (nums[i + 1] - nums[i] != 1)
                {
                    return nums[i] + 1;
                }
            }
        }

        return 0;
    }
};

// Another approach could be get the sum of a range using n(n+1)/2 and subtract the sum of the given array