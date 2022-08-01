class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int start{0};
        int end= numbers.size()-1;
        while(numbers[start]+numbers[end]!=target){
            if(numbers[start]+numbers[end]>target){
                end--;
            }
            else{
                start++;
            }
        }
        res.push_back(start+1);
        res.push_back(end+1);
        return res;
    }
};