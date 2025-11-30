class Solution {
public:
    int maxDepth(string s) {
        int maxDepth = 0;
        int counter = 0;
        for(int i=0; i<s.length(); i++) {
            if(s[i] == '(') {
                counter++;
            } else if(s[i] == ')') {
                counter--;
            }
            maxDepth = max(maxDepth, counter);
        }
        return maxDepth;
    }
};