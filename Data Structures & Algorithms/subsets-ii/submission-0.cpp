class Solution {
public:
vector<vector<int>> res;

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> solution;
        backtrack(nums, 0 , solution);
        return res;
    }

void backtrack(vector<int>& nums, int idx, vector<int>& solution){
        if(idx == nums.size()){
            res.push_back(solution);
            return ;
        }

        solution.push_back(nums[idx]);
        
        backtrack(nums, idx+1, solution);
        solution.pop_back();
        while(idx+1 < nums.size() && nums[idx]==nums[idx+1]){
            idx++;
        }
        backtrack(nums, idx+1, solution);
    }
    
};
