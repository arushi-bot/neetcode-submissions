class Solution {
public:
    bool isValid(string s) {
        std::unordered_map<char, char> sol = {{'}','{'}, {']','['}, {')','('}};
        std::stack<char> stack;
        for(char c : s){
            if(sol.find(c) != sol.end()){
                if(stack.empty() || stack.top()!= sol[c])
                    return false;
                stack.pop();
            }
            else{
                stack.push(c);
            }
        }
        if(stack.empty())
            return true;
        else
            return false;
    }
};
