class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int rowStart{0}, colStart{0};
        int rowEnd= matrix.size()-1;
        int colEnd=matrix[0].size()-1;
        vector<int> res;
        
        while(rowStart<=rowEnd && colStart<=colEnd){
            
            // traverse right
            for(int i=colStart;i<=colEnd;i++){
                res.push_back(matrix[rowStart][i]);
            }
            rowStart++;
            
            // traverse down
            for(int i=rowStart;i<=rowEnd;i++){
                res.push_back(matrix[i][colEnd]);
            }
            colEnd--;
            
            // traverse left
            if(rowStart<=rowEnd){
            for(int i=colEnd;i>=colStart;i--){
                res.push_back(matrix[rowEnd][i]);
            }
            }
            rowEnd--;
            
            // traverse up
             if(colStart<=colEnd){
            for(int i=rowEnd;i>=rowStart;i--){
                res.push_back(matrix[i][colStart]);
            }
            }
            colStart++;
        
        }
        
     return res;  
        
    }
};