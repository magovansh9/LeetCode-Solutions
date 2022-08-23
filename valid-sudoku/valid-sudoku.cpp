class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       unordered_map<string,int> umap;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    string r="row"+to_string(i)+to_string(board[i][j]);
                    string c="col"+to_string(j)+to_string(board[i][j]);
                    int box = (i/3) * 3 + (j/3);
                    string b="box"+to_string(box)+to_string(board[i][j]);
                    
                    if(umap[r]!=1 && umap[c]!=1 && umap[b]!=1){
                        umap[r]=1;
                        umap[c]=1;
                        umap[b]=1;
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        
        return true;
    }
};