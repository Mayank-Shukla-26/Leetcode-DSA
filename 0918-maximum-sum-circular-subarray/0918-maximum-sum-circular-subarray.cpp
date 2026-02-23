class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxending = nums[0];
        int ans1 = nums[0];
        int sum = nums[0];

        // looking for a straight subarray maxsum
        for (int i = 1; i < nums.size(); i++) {
            sum += nums[i];
            int v1 = nums[i];
            int v2 = nums[i] + maxending;
            maxending = max(v1, v2);
            ans1 = max(ans1, maxending);
        }

        // now looking for circular subarray sum
        int minsum = nums[0];
        int minending = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            int v1 = nums[i];
            int v2 = nums[i] + minending;
            minending = min(v1, v2);
            minsum = min(minsum, minending);
        }
        int ans2 = sum - minsum;
        // saara ka saara array negative element se bhara pada hai. ab koi ek
        // element hi maxsubarray banega;  jo ki maxsum(ans1)  me already
        // calculated hai.
        if (ans2 == 0)
            return ans1;
        return max(ans1, ans2);
    }
};