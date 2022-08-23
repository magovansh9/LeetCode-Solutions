class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,int> umap;
        for(char c:stones){
            umap[c]++;
        }
        int numJewels{0};
        for(char c:jewels){
            numJewels+=umap[c];
        }
        
        return numJewels;
    }
};