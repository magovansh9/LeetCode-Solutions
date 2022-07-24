class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int max{0}, dominantIndex{0};
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
                dominantIndex=i;
            }
        }
        
        int num{0};
        for(int i=0;i<nums.size();i++){
            num=nums[i];
            if(num!=max){
                if(max<2*num){
                    return -1;
                }
            }
        }
        
        return dominantIndex;
        
    }
};