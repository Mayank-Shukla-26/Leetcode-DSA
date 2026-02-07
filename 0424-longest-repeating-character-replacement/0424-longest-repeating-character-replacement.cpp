class Solution {
public:
    int maxcount(vector<int> &a) {
        int maxc = -1;
        for(int i=0; i<a.size(); i++) {
            maxc = max(maxc, a[i]);
        }
        return maxc;
    }
    int characterReplacement(string s, int k) {
        int low = 0, high = 0;
        int n = s.size();
        int res = INT_MIN;
        vector<int> f(256, 0);
        for (high = 0; high < n; high++) {
            f[s[high]]++;
            int len = high - low + 1;
            int maxcnt = maxcount(f);
            int diff = len - maxcnt;

            while(diff > k) {
                f[s[low]]--;
                low++;
                maxcnt = maxcount(f);
                len = high - low + 1;
                diff = len - maxcnt;
            }

            len = high - low + 1;
            res = max(res, len);
        }
        return res;
    }
};