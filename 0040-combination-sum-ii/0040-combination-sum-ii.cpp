class Solution {
public:
    void helper(int index, vector<int>& curr, vector<vector<int>>& ans, vector<int>& nums, int target) {
        if(target == 0) {
            ans.push_back(curr);
            return;
        } 

        for(int i = index; i < nums.size(); i++) {
            if(i > index && nums[i] == nums[i-1]) {
                continue;
            }
            if(nums[i] > target) {
                break;
            } 

            curr.push_back(nums[i]);
            helper(i +1, curr, ans, nums, target - nums[i]);
            curr.pop_back();
        }

    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> curr;

        helper(0, curr, ans, candidates, target);
        return ans;
    }
};