class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        int currentSum = 0;
        int minLength = INT_MAX;

        while(right < n) {
            currentSum += nums[right];

            while(currentSum >= target) {
                int len = right - left + 1;
                minLength = min(minLength, len);
                currentSum -= nums[left];
                left++;
            }
            right++;
        }
        
        return minLength == INT_MAX ? 0 : minLength;
    }
};