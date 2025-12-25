class Solution {
public:
    void helper(int index, int target, vector<int>& curr, vector<vector<int>>& ans, vector<int>& candidates) {
        if(target == 0) {
            ans.push_back(curr);
            return;
        } else if(target < 0 || index == candidates.size()) {
            return;
        }
        curr.push_back(candidates[index]);
        helper(index, target - candidates[index], curr, ans, candidates);
        curr.pop_back();
        helper(index + 1, target, curr, ans, candidates);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;

        helper(0, target, curr, ans, candidates);
        return ans;
    }
};