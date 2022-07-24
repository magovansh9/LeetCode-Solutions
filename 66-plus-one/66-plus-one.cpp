class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int len=digits.size();
        if(digits[len-1]!=9){
            digits[len-1]++;
            return digits;
        }
        else{
            for(int i=len-1; i>=0; i--){
                if(digits[i]==9){
                    digits[i]=0;
                    if(i==0){
                      digits.insert(digits.begin(),1);
                      return digits;
                    }
                }
                else{
                    digits[i]++;
                    return digits;
                }
            }
        }
        
        return digits;
    }
};