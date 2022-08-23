class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> hset;
        int numsSum{0}, hsetSum{0};
        for(int num:nums){
            hset.insert(num);
            numsSum+=num;
        }
        for(int num:hset){
            hsetSum+=num;
        }
        
        return (2*hsetSum)-numsSum;
        
    }
};