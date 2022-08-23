class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map1,map2;
        vector<int> res;
        for(int num:nums1){
            map1[num]++;
        }
        for(int num:nums2){
            map2[num]++;
        }
        unordered_map<int,int>::iterator it;
        for(it=map1.begin();it!=map1.end();it++){
            if(map2.find(it->first)!=map2.end()){
                    for(int i=0;i<min(it->second,map2.find(it->first)->second);i++){
                    res.push_back(it->first);
                }
            }
        }
        
        return res;
    }
};