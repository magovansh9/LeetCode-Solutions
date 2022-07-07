class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count{1};
        int len=nums.size();
        for(int i=1; i<len; i++){
            if(nums[i]!=nums[i-1]){
                nums[count]=nums[i];
                count++;
            }
        }
        
        return count;
    }
};