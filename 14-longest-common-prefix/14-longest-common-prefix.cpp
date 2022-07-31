class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
       int minStrLen{200};
       string minLenStr{""};
        string res="";
        for(int i=0;i<strs.size();i++){
            if(strs[i].size()<minStrLen){
                minStrLen=strs[i].size();
                minLenStr=strs[i];
            }
        }
        
        int j{0};
        while(j<minStrLen){
         for(int i=0;i<strs.size();i++){
            if(strs[i][j]!=minLenStr[j]){
                return res;
            }
        }
           res.push_back(minLenStr[j]);
             j++;
        }
        
        return res;
    }
};