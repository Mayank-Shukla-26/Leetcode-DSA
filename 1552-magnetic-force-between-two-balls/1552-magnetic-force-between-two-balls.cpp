class Solution {
public:
    bool fun(vector<int> &stalls, int n, int k, int guess) {
        int cow = 1;
        int pos = stalls[0];

        for(int i=1; i<n; i++) {
            int dist = stalls[i] - pos;
            if(dist < guess) continue;
            cow++;
            pos = stalls[i];
        }

        if(cow >= k) {
            return true;
        } else {
            return false;
        }
    }

    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(), position.end());

        int low = 1, high = position[n-1] - position[0];
        int res = -1;

        while(low <= high) {
            int guess = (low+high)/2;

            if(fun(position, n, m, guess)) {
                res = guess;
                low = guess + 1;
            } else {
                high = guess - 1;
            }
        }

        return res;
    }
};