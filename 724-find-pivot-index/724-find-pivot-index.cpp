class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
     int leftSum{0};
     int len=nums.size(), sum{0};
     for(int i=0;i<len;i++){
         sum+=nums[i];
     }
     for(int i=0;i<len;i++){
         if(leftSum== sum-leftSum-nums[i] ){
             return i;
         }
         leftSum+=nums[i];
     }
        
        return -1;
    }
};