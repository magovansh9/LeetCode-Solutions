class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_set<int> hset,hset2;
        for(int num:nums1){
            hset.insert(num);
        }
        for(int num:nums2){
            hset2.insert(num);
        }
       if(hset.size()>hset2.size()){
           for(int n:hset2){
               if(hset.count(n)>0){
                   result.push_back(n);
               }
           }
           return result;
       }
        
        for(int n:hset){
               if(hset2.count(n)>0){
                   result.push_back(n);
               }
           }
        return result;
    }
};