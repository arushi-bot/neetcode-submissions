class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26);
        int maxcount =0;
        int l =0;
        int r=0;
        int result=0;
        while(r<s.size()){
            count[s[r]-'A']++;
            maxcount = max(maxcount,count[s[r]-'A']);
            if(r-l+1 - maxcount > k ){
                count[s[l]-'A']--;
                l++;
            }
            result = max(result, r-l+1);
            r++;
        }
        return result;
    }
};
