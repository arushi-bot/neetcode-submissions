class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();    
        vector<int> l(n);
        vector<int> r(n);
        vector<int> res(n);
        l[0]=1;
        r[n-1]=1;
        for(int i=1; i <= n-1; i++){
            l[i]=l[i-1]*nums[i-1];
            r[n-1-i]=r[n-i]*nums[n-i];
        }
        for(int i = 0; i<n; i++){
            res[i]=l[i]*r[i];
        }
        return res;
    }
};
