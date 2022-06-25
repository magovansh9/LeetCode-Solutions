#include <iostream>
#include <vector>
using namespace std;

// Given: An array
// To Do: Return array +1

// My Solution
//
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int len = digits.size();
        int count9{0};
        vector<int> temp;

        if (digits[len - 1] != 9)
        {
            digits[len - 1]++;
            return digits;
        }

        else
        {
            // if array has some 9's
            for (int i = len - 1; i >= 0; i--)
            {
                if (digits[i] == 9)
                {
                    count9++;
                }
            }

            if (count9 != len)
            {
                for (int i = len - 1; i >= 0; i--)
                {
                    if (digits[i] == 9)
                    {
                        digits[i] = 0;
                    }
                    else
                    {
                        digits[i] += 1;
                        break;
                    }
                }
                return digits;
            }
            else
            {
                temp.push_back(1);
                for (int i = len - 1; i >= 0; i--)
                {
                    temp.push_back(0);
                }
                return temp;
            }
        }

        return digits;
    }
};
