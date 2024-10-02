class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> sol;
        backtrack(candidates, target, 0, 0, sol, ans);
        return ans;
    }

private:
    void backtrack(vector<int>& candidates, int target, int start, int curSum, vector<int>& sol, vector<vector<int>>& ans){
        if(curSum == target){
            ans.push_back(sol);
            return;
        }
        if(curSum > target || start == candidates.size()){
            return;
        }

        backtrack(candidates, target, start + 1, curSum, sol, ans);

        sol.push_back(candidates[start]);
        backtrack(candidates, target, start, curSum + candidates[start], sol, ans);
        sol.pop_back();
    }
};
