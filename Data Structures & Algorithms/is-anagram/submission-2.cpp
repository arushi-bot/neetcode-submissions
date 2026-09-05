class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> hash_s, hash_t;
        if(s.length() != t.length()){
            return false;
        }
        for(int i=0 ; i < s.length() ; i++){
            hash_s[s[i]]++;
            hash_t[t[i]]++;
        }
        return hash_s == hash_t;

    }
};
