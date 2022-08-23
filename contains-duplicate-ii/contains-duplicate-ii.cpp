class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int num:nums){
            map[num]++;
        }
        for(int i=0;i<nums.size();i++){
            if(map.find(nums[i])->second>1){
                // std::cout<< nums[i]<< " "<< i<< " "<< std::endl;
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]==nums[i]){
                // std::cout<< nums[j]<< " "<< j<< " "<< std::endl;
                        if(abs(i-j)<=k){
                            return true;
                        }
                    }
                }
            }
        }
        
        return false;
    }
};