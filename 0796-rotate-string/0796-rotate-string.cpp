class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() == goal.length()) {
            for (int i = 0; i < s.length(); i++) {
                string temp = s.substr(i) + s.substr(0, i);

                if (temp == goal) {
                    return true;
                }
            }
        }

        return false;
    }
};