class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        backtrack(res, 0,nums);
        return res;
    }

    void backtrack(vector<vector<int>>& res, int idx, vector<int>& nums){
        if(idx == nums.size()){
            res.push_back(nums);
            return;
        }
        
        for(int i=idx; i < nums.size(); i++){
            swap(nums[idx],nums[i]);
            backtrack(res,idx+1,nums);
            swap(nums[i],nums[idx]);
        }
    }
    

    
    
};
