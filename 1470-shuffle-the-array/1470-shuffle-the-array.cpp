class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0, j=n;
        int k=0;
        int s = nums.size();
        vector<int> ans(2*n);

        while(j < s) {
            ans[k++] = nums[i++];
            ans[k++] = nums[j++]; 
        }

        return ans;
    }
};