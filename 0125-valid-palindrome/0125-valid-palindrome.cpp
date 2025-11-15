class Solution {
public:
    bool isPalindrome(string s) {
        string removed_s = "";
        for(char c : s) {
            if( isalnum(c) ) {
                removed_s += tolower(c);
            }
        }
        int i = 0, j = removed_s.size() - 1;
        while(i <= j) {
            if(removed_s[i] != removed_s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};