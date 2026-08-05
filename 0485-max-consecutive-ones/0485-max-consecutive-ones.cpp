class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currCount = 0;
        int maxCount = 0;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 1) {
                currCount += 1;
                maxCount = max(maxCount, currCount);
            }
            if(nums[i] == 0) {
                currCount = 0;
            }
        }
        return maxCount;
    }
};