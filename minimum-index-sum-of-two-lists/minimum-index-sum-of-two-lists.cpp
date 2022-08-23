class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> map;
        vector<string> res;
        for(int i=0;i<list1.size();i++){
            map.insert(make_pair(list1[i],i));
        }
        int minSum{INT_MAX},sum{0};
        for(int i=0;i<list2.size();i++){
            if(map.find(list2[i])!=map.end()){
             sum=i+map.find(list2[i])->second;
                if(sum<minSum){
                    res.clear();
                    minSum=sum;
                    res.push_back(list2[i]);
                }
                else if(sum==minSum){
                    res.push_back(list2[i]);
                }
            }
        }
        return res;
    }
};