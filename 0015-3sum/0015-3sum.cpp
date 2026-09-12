class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        set<vector<int>> uniqueTriplets;

        for (int i = 0; i < n - 2; i++) {
            int target = -nums[i];
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[j] + nums[k];

                if (target == sum) {
                    uniqueTriplets.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } else if (sum < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }

        for (auto x : uniqueTriplets) {
            ans.push_back(x);
        }

        return ans;
    }
};