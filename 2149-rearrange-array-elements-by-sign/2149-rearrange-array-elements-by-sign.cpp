class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pnums;
        vector<int> nnums;
        int s = nums.size();
        for (int i = 0; i < s; i++) {
            if (nums[i] < 0) {
                nnums.push_back(nums[i]);
            } else {
                pnums.push_back(nums[i]);
            }
        }
        int p = 0;
        int n = 0;
        vector<int> ans;
        for (int i = 0; i < s; i++) {
            if (i % 2 == 0) {
                ans.push_back(pnums[p]);
                p++;
            } else {
                ans.push_back(nnums[n]);
                n++;
            }
        }
        return ans;
    }
};