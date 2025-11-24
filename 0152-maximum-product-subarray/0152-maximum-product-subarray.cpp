class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        int maxProd = INT_MIN;

        for(int i=0; i<n; i++) {
            int currProd = 1;
            for(int j=i; j<n; j++) {
                currProd *= nums[j];

                maxProd = max(maxProd, currProd);
            }
        }
        return maxProd;
    }
};