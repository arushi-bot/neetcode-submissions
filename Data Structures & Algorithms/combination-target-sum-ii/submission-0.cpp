class Solution {
    vector<vector<int>> res;
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> solution;
        dfs(candidates,target,0,solution);
        return res;
    }
private:
    void dfs(vector<int>& candidates, int target, int pos, vector<int>solution){
        if(target == 0){
            res.push_back(solution);
            return;
        }
        if(target < 0 || pos >= candidates.size()){
            return;
        }
        solution.push_back(candidates[pos]);
        dfs(candidates,target-candidates[pos],pos+1,solution);
        solution.pop_back();
        while(candidates[pos] == candidates[pos+1] && pos+1 < candidates.size()){
            pos++;
        }
        dfs(candidates,target,pos+1,solution);
    }
};
