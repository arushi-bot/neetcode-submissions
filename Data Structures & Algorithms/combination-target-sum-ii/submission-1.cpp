class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> subset;
        sort(candidates.begin(),candidates.end());
        dfs(candidates,target,res,subset,0);
        return res;
    }

    void dfs(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& subset, int pos ){

        if(target == 0 )
        {
            res.push_back(subset);
            return;
        }

        if(pos >= candidates.size() || target < 0) return;


        subset.push_back(candidates[pos]);
        dfs(candidates, target - candidates[pos], res, subset, pos+1);

        subset.pop_back();

        while(pos+1 < candidates.size() && candidates[pos] == candidates[pos+1])
        {
            pos++;
        }
        dfs(candidates, target, res, subset, pos+1);

    }
};
