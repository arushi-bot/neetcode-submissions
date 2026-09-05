class MinStack {
public:
        stack<int> Stack;
        stack<int> Minstack;
    MinStack() {
    }
    
    void push(int val) {
        Stack.push(val);
        if(Minstack.empty() || Minstack.top() >= val )
        {
            Minstack.push(val);
        }
    }
    
    void pop() {
        int tmp = Stack.top();
        if(tmp == Minstack.top()){
            Minstack.pop();
        }
        Stack.pop();
    }
    
    int top() {
        return Stack.top();
    }
    
    int getMin() {
        return Minstack.top();
    }
};
