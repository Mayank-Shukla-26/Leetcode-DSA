class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low =0, high = 0;
        int res = INT_MIN;
        int n = s.length();
        unordered_map<char, int> f;
        for(high = 0; high <n; high++) {
            f[s[high]]++;
            
            int k = high -low + 1;
            while(f.size() < k) {
                f[s[low]]--;
                if(f[s[low]] == 0) {
                    f.erase(s[low]);
                }
                low++;
                k = high - low +1;
            }
            k = high - low + 1;
            res = max(res, k);
        }
        if(res == INT_MIN) return 0;
        return res;
    }
};