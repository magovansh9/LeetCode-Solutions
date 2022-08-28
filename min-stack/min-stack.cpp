class MinStack {
public:
    vector<int> data;
    MinStack() {
    }
    
    void push(int val) {
        data.push_back(val);
    }
    
    void pop() {
        data.pop_back();
    }
    
    int top() {
        return data.back();
    }
    
    int getMin() {
        int minVal=INT_MAX;
        for(int num:data){
            if(num<minVal){
                minVal=num;
            }
        }
        return minVal;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */