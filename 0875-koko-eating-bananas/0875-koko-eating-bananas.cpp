class Solution {
public:
    long long fun(vector<int> &a, int n, int speed) {
        long long h = 0;

        for(int i=0; i<n; i++) {
            h = h + a[i] / speed;
            if(a[i] % speed != 0) {
                h++;
            }
        }

        return h;
    }

    int maxm(vector<int> &a) {
        int res = -1;

        for(int i=0; i<a.size(); i++) {
            res = max(res, a[i]);
        }

        return res;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1, high = maxm(piles);
        int res = -1;

        while(low <= high) {
            int guess = (low + high)/2;
            long long hour = fun(piles, n, guess);

            if(hour > h) {
                low = guess + 1;
            } else {
                res = guess;
                high = guess - 1;
            }
        }

        return res;
    }
};