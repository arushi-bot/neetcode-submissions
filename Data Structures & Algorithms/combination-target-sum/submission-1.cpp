class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> subset;
        dfs(res,0,nums,target,subset);
        return res;
    }

    void dfs(vector<vector<int>>& res,int pos,const vector<int>& nums,int target,vector<int>& subset)
    {
        if(pos >= nums.size() || target<0) return;
        
        if(target == 0)
        {
            res.push_back(subset);
            return;
        }

        subset.push_back(nums[pos]);
        dfs(res, pos, nums, target - nums[pos], subset);
        subset.pop_back();
        dfs(res, pos+1, nums, target, subset);

    }
};
