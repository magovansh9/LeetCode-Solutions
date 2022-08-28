class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1){
            return false;
        }
        
        unordered_map<char,char> map;
        map.insert(make_pair('{','}'));
        map.insert(make_pair('[',']'));
        map.insert(make_pair('(',')'));
        
        stack<char> stk;
        for(int i=0;i<s.size();i++){
            if(map.find(s[i])!=map.end()){
                stk.push(s[i]);
            }else{
                if(stk.empty()){
                    return false;
                }
                else if(map[stk.top()]!=s[i]){
                    return false;
                }
                stk.pop();
            }
        }
        return stk.empty();
        
    }
};