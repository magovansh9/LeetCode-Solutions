#include <iostream>
#include <vector>
using namespace std;

// Given: An array with a unique element
// To Do: Return the element

// My Solution
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int sol{0};
        for (int i = 0; i < nums.size(); i++)
        {
            sol ^= nums[i];
        }
        return sol;
    }
};