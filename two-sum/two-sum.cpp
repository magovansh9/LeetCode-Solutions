class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        unordered_map<int,int> hmap;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(hmap.find(target-nums[i])==hmap.end()){
                hmap.insert(make_pair(nums[i],i));
            }
            else{
                res.push_back(i);
                res.push_back(hmap.find(target-nums[i])->second);
            }
        }
       return res;
    }
};