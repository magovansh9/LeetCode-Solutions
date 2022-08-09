class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> hmap;
        int minSum{INT_MAX},sum;
        vector<string> res;
        for(int i=0;i<list1.size();i++){
           hmap.insert(make_pair(list1[i],i));
        }
        for(int i=0;i<list2.size();i++){
            if(hmap.find(list2[i])!=hmap.end()){
                sum=i+hmap.find(list2[i])->second;
                if(sum<minSum){
                    res.clear();
                    res.push_back(list2[i]);
                    minSum=sum;
                }
                else if(sum==minSum){
                     res.push_back(list2[i]);
                }
            }
        }
        return res;
    }
};