class Solution {
public:
    int countCommas(int n) {
        if( n < 1000) return 0;

        int ans = n - 999;

        if(n == 1000000) {
            ans += 1;
        }

        return ans;
    }
};