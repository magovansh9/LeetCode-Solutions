class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {

        vector<vector<int>> sol;
        vector<int> a, b;
        bool found{false};

        // remove duplicates
        sort(nums1.begin(), nums1.end());
        nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());

        sort(nums2.begin(), nums2.end());
        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());

        // find nums1 integers not in nums2
        for (int i = 0; i < nums1.size(); i++)
        {
            int j{0};
            while (nums1[i] != nums2[j])
            {
                j++;
                if (j == nums2.size())
                {
                    a.push_back(nums1[i]);
                    break;
                }
            }
        }

        // find nums2 integers not in nums1
        for (int i = 0; i < nums2.size(); i++)
        {
            int j{0};
            while (nums2[i] != nums1[j])
            {
                j++;
                if (j == nums1.size())
                {
                    b.push_back(nums2[i]);
                    break;
                }
            }
        }

        sol.push_back(a);
        sol.push_back(b);

        return sol;
    }
};