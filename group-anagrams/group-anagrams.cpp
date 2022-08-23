class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
          unordered_map<string,vector<string>> umap;
          vector<vector<string>> result;
          for(string s:strs){
              string t=s;
              sort(t.begin(),t.end());
              umap[t].push_back(s);
          }
         for(auto p:umap){
             result.push_back(p.second);
         }
        
        return result;
    }
};