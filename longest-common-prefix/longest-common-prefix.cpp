class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int minStrLen{200};
        string minLenStr="";
        for(int i=0;i<strs.size();i++){
            if(strs[i].size()<minStrLen){
                minStrLen=strs[i].size();
                minLenStr=strs[i];
            }
        }
        
        int i{0};
        string res="";
        while(i<minStrLen){
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=minLenStr[i]){
                    return res;
                }
            }
            res.push_back(minLenStr[i]);
            i++;
        }
        
        return res;
    }
};