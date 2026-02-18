class Solution {
public:
    int nextIndex(vector<int>& nums, int i) {
        int n = nums.size();
        int next = (i + nums[i]) % n;
        if (next < 0)
            next += n;
        return next;
    }

    bool circularArrayLoop(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                continue;

            int slow = i, fast = i;
            bool dir = nums[i] > 0;

            while (true) {
                slow = nextIndex(nums, slow);
                fast = nextIndex(nums, fast);

                if (nums[fast] > 0 != dir || nums[fast] == 0) {
                    break;
                }
                fast = nextIndex(nums, fast);
                if (nums[fast] > 0 != dir || nums[fast] == 0) {
                    break;
                }
                if (slow == fast) {
                    if (slow == nextIndex(nums, slow))
                        break;
                    return true;
                }
            }

            int j = i;
            while (nums[j] != 0 && (nums[j] > 0) == dir) {
                int nxt = nextIndex(nums, j);
                nums[j] = 0;
                j = nxt;
            }
        }
        return false;
    }
};