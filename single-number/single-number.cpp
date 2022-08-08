class Solution {
public:
    int singleNumber(vector<int>& nums) {
      unordered_set<int> hset;
      int countArr{0}, countHset{0};
      for(int num:nums){
         hset.insert(num);
          countArr+=num;
      }
        for(int x:hset){
            countHset+=x;
        }
        return (2*countHset)-countArr;
    }
};