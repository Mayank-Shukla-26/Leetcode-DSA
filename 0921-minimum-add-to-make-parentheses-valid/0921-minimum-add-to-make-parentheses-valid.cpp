class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0, close = 0;

        for(char ch : s) {
            if(ch == '(') {
                open++;
            } else {
                if(open > 0) {
                    open--;
                } else {
                    close++;
                }
            }
        }

        // if ((open + close) % 2 != 0) return -1;

        // return (open + 1) / 2 + (close + 1) / 2;

        return open + close;

    }
};