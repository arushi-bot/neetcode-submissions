class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& nums, int target)
    {
        vector<int> solution;
        backtrack(nums,target,solution,0);
        return res;
    }
    private:
    void backtrack(vector<int>& nums,int target, vector<int>& solution, int i){
        if(target == 0){
            res.push_back(solution);
            return ;
        }
        if(target < 0 || i >= nums.size()){
            return;
        }
        solution.push_back(nums[i]);
        backtrack(nums, target - nums[i] ,solution, i);
        solution.pop_back();
        backtrack(nums, target, solution, i+1);
    }
};
