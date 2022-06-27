class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {

        // use a simple walk up and down approach
        int i{0}, len = arr.size();
        while (i + 1 < len && arr[i] < arr[i + 1])
            i++;

        if (i == 0 || i == len - 1)
        {
            return false;
        }

        while (i + 1 < len && arr[i] > arr[i + 1])
            i++;

        return i == len - 1;
    }
};