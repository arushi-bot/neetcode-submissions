class MinStack {
public:
    std::stack<int> stack;
    MinStack() {
        
    }
    
    void push(int val) {
        stack.push(val);
    }
    
    void pop() {
        stack.pop();
    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
       std::stack<int> tmp;
        int mini = stack.top();
        while (stack.size()) {
            mini = min(mini, stack.top());
            tmp.push(stack.top());
            stack.pop();
        }

        while (tmp.size()) {
            stack.push(tmp.top());
            tmp.pop();
        }

        return mini; 
    }
};
