#include <iostream>
#include <vector>
using namespace std;

// Given: An array of integers with a number being repeated twice
// To Do: Find the duplicate

// My Solution
// Sort the array, check if two consecutive numbers are the same, if yes, return true else return false
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return true;
            }
        }
        return false;
    }
};
