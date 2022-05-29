#include <iostream>
#include <vector>
using namespace std;

// Given: An array with interspersed 0s
// To Do: Move the zeros to the end without changing the order of the non-zero elements

// My Solution
// Get index of first zero, keep count of zeros, replace zeros with non-zero elements using the counter
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {

        // find first zero
        int zeroIndex{0};
        bool hasZero{false};
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                zeroIndex = i;
                hasZero = true;
                break;
            }
        }

        if (nums.size() == 1 || !hasZero)
        {
            // do nothing
        }
        else
        {
            // Move non-zeros to their place
            for (int i = zeroIndex + 1; i < nums.size(); i++)
            {
                if (nums[i] != 0)
                {
                    nums[zeroIndex] = nums[i];
                    nums[i] = 0;
                    zeroIndex++;
                }
            }
        }
    }
};