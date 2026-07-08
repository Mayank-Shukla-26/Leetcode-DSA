class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int start = 0;
        
        for (int i = 0; i <= n; i++) {
            // If we reach a space or the end of the string, we found a complete word
            if (i == n || s[i] == ' ') {
                int left = start;
                int right = i - 1;
                
                // Reverse the current word using two pointers
                while (left < right) {
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }
                
                // Move the start pointer to the beginning of the next word
                start = i + 1;
            }
        }
        
        return s;
    }
};