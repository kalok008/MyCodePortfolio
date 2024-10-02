class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> sol;
        backtrack(n, k, sol, ans);
        return ans;
    }

private:
    void backtrack(int n, int k, vector<int>& sol, vector<vector<int>>& ans) {
        if(sol.size() == k){
            ans.push_back(sol);
            return;
        }

        if(n > k - sol.size()){
            backtrack(n - 1, k, sol, ans);
        }

        sol.push_back(n);
        backtrack(n - 1, k, sol, ans);
        sol.pop_back();
    }
};
