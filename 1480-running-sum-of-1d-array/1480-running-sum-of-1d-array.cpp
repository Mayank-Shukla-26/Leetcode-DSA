class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        res.push_back(nums[0]);
        int sum = 0;

        for(int i=1; i<nums.size(); i++) {
            for(int j=0; j<=i; j++) {
                sum += nums[j];
            }
            res.push_back(sum);
            sum = 0;
        }

        return res;
    }
};