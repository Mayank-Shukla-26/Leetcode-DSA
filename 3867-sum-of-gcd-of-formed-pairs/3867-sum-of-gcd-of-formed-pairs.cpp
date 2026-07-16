class Solution {
public:
    long long gcd(long long a, long long b) {
        while(b != 0) {
            long long rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGcd(nums.size());

        long long mx = 0;

        for(long long i=0; i<nums.size(); i++) {
            mx = max(mx, (long long)nums[i]);
            prefixGcd[i] = gcd(mx, (long long)nums[i]);
        }
                
        sort(prefixGcd.begin(), prefixGcd.end());
        int left = 0;
        int right = nums.size() - 1;

        long long res = 0;
        while(left < right) {
            res += gcd(prefixGcd[right], prefixGcd[left]);
            left++;
            right--;
        }

        return res;
    }
};