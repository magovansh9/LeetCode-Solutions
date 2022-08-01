class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int maxValue{0};
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                 maxValue+=nums[i];
            }
        }
        return maxValue;
    }
};