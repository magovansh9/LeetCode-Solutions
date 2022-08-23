class Solution {
public:
    bool isIsomorphic(string s, string t) {
      // mapping is twofold, we need two hashmaps for each mapping
      unordered_map<int,int> s_t;
      unordered_map<int,int> t_s;
      for(int i=0;i<s.size();i++){
          if(s_t.find(s[i])==s_t.end() && t_s.find(t[i])==t_s.end()){
              s_t.insert(make_pair(s[i],t[i]));
              t_s.insert(make_pair(t[i],s[i]));
          }
          else{
              if(s_t.find(s[i])!=s_t.end()){
                  if(s_t.find(s[i])->second!=t[i]){
                      return false;
                  }
              }
              
              else if(t_s.find(t[i])!=t_s.end()){
                  if(t_s.find(t[i])->second!=s[i]){
                      return false;
                  }
              }
          }
      }
        
        return true;
      
    }
};