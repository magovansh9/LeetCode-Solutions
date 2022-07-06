class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result{0};
        for(int i=0; i<nums.size(); i++){
            int num_digits{0};
            while(nums[i]!=0){
                nums[i]=nums[i]/10;
                num_digits++;
            }
            if(num_digits %2==0){
                result++;
            }
        }
        
        return result;
    }
};