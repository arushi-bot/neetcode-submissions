class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char,int> s_count,t_count;

        for(int i = 0; i < s.length(); i++){
            s_count[s[i]]++;
            t_count[t[i]]++;
        }
        for(int i = 0; i < s_count.size(); i++){
            if(s_count[s[i]] != t_count[s[i]] || s_count[t[i]] != t_count[t[i]]){
                return false;
            }

        }
        return true;
        
    }
};
