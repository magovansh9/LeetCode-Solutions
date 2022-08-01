class Solution {
public:
    void reverseString(vector<char>& s) {
        int j{0};
        char c{' '};
        for(int i=0;i<s.size();i++){
            if(i== (s.size())/2)
            {
                break;
            }
            j=s.size()-1-i;
            c=s[i];
            s[i]=s[j];
            s[j]=c;
        }
    }
};