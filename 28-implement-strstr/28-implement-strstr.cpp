class Solution {
public:
    int strStr(string haystack, string needle) {
        int haystackL=haystack.length(),needleL=needle.length();
        for(int i=0;i<haystackL-needleL+1;i++)
        {
            if(needle[0]==haystack[i] && needle==haystack.substr(i,needleL))
				return i;
        }
        return -1;
    }
};