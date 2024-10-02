class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> sol;
        backtrack(nums, 0, sol, ans);
        return ans;
    }

private:
    void backtrack(vector<int>& nums, int start, vector<int>& sol, vector<vector<int>>& ans) {
        ans.push_back(sol);
        for(int i = start; i < nums.size(); i++){
            sol.push_back(nums[i]);
            backtrack(nums, i + 1, sol, ans);
            sol.pop_back();
        }
    }
};
