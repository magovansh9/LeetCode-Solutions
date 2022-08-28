class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1){
            return false;
        }
        unordered_map<char,char> map;
        map.insert(make_pair('(',')'));
        map.insert(make_pair('[',']'));
        map.insert(make_pair('{','}'));
        
        stack<char> stk;
        for(char c:s){
            if(map.find(c)!=map.end()){
                stk.push(c);
            }else{
                if(stk.empty()){
                    return false;
                }
                else if(map[stk.top()]!=c){
                    return false;
                }
                stk.pop();
            }
        }
        
        return stk.empty();
    }
};