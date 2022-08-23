class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_set<int> hset1, hset2;
        for(int num:nums1){
            hset1.insert(num);
        }
        for(int num:nums2){
            hset2.insert(num);
        }
        for(int num:hset1){
            if(hset2.count(num)>0){
                result.push_back(num);
            }
        }
        
        return result;
    }
};