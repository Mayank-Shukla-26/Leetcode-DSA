class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int n = nums.size();
        for(int k=0; k<n; k++) {
            if(nums[k] != val) {
                nums[i] = nums[k];
                i++;
            }
        }
        return i;
    }
};