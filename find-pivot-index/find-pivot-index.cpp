class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int sum{0};
        int len= nums.size();
        for(int i=0;i<len;i++){
            sum+=nums[i];
        }
        if(sum-nums[0]==0){
            return 0;
        }
        
        int leftSum{0}, rightSum{0};
        
        for(int i=1;i<len-1;i++){
            leftSum=leftSum+nums[i-1];
            for(int j=i+1;j<len;j++){
               rightSum+=nums[j];
            }
            if(leftSum==rightSum){
                return i;
            }
            rightSum=0;
        }
        
        if(sum-nums[len-1]==0){
            return len-1;
        }
        
        return -1;
    }
};