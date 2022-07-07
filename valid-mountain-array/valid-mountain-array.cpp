class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
  // use a simple walk up and down approach
        int i{0};
        int len=arr.size();
        
        if(len<3){
            return false;
        }
        
        while(i<len && arr[i]<arr[i+1]){  
            i++;
        }
        
        if(i==0 || i==len-1){
            return false;
        }
        
        while(i<len-1 && arr[i]>arr[i+1]){
            i++;
        }
        
        return (i==len-1);
    }
};