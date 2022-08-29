class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> stk;
        unordered_map<string,string> map;
        map.insert(make_pair("+","+"));
         map.insert(make_pair("-","-"));
         map.insert(make_pair("*","*"));
         map.insert(make_pair("/","/"));
        for(int i=0;i<tokens.size();i++){
            if(map.find(tokens[i])!=map.end())
            {
                int b=stoi(stk.top());
                stk.pop();
                int a=stoi(stk.top());
                stk.pop();
                int res{0};
                if(tokens[i]=="+"){
                    res= a+b;
                }
                else if(tokens[i]=="-"){
                    res=a-b;
                }
                else if(tokens[i]=="*"){
                    res=a*b;
                }
                else{
                    res=a/b;
                }
                stk.push(to_string(res));
                
            }
            else{
                stk.push(tokens[i]);
            }
        }
        
        return stoi(stk.top());
        
    }
};