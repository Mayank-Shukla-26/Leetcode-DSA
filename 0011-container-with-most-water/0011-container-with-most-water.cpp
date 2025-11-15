class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max_water = 0;
        int i = 0, j = n - 1;
        while (i < j) {
            int max_h = min(height[i], height[j]);
            int width = j - i;
            int curr_water = max_h * width;
            max_water = max(curr_water, max_water);
            height[i] < height[j] ? i++ : j--;
        }

        return max_water;
    }
};