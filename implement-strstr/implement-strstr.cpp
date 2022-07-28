class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int nSize=needle.size();
        int hSize=haystack.size();
        if(nSize==0){
            return 0;
        }
        for(int i=0;i<hSize;i++){
            if(haystack[i]==needle.at(0)){
                int j{0};
                for( j=0;j<nSize;j++){
                    if(haystack[i+j]!=needle[j]) break;
                }
                if(j==nSize){
                    return i;
                }
            }  
        }
        
        return -1;
        
    }
};