#include <iostream>
#include <vector>
using namespace std;

// Given: An array of size n
// To Do: Return the element that appears in majority i.e. that appears more than n/2 times

// My Solution
// Use a counter array to keep a count of each element's frequency, and return the element with the highest frequency
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int currNumIndex{0}, currNum = nums[0];
        int len = nums.size();
        int *counter = new int[len]{0};

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == currNum)
            {
                counter[currNumIndex] += 1;
            }
            else
            {
                currNum = nums[i];
                currNumIndex = i;
                counter[currNumIndex] += 1;
            }
        }

        return nums[findMaxIndex(counter, nums.size())];
    }

    int findMaxIndex(int nums[], int len)
    {
        int counter{0}, maxNum = nums[0];
        for (int i = 0; i < len; i++)
        {
            if (nums[i] > maxNum)
            {
                maxNum = nums[i];
                counter = i;
            }
        }
        return counter;
    }
};

// Optimal Solution
// Sort the array and return the element at n/2 index. As it is the majority element, it will always be at the n/2 index regardless
// of whether the size of the array is odd or even
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        return nums[(nums.size()) / 2];
    }
};