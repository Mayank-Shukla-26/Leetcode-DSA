class Solution {
public:
    bool chk(char &ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            return true;
        }
        else{
            return false;
        }
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;

        while(i < j) {
            if(!chk(s[i])) {
                i++;
            }
            else if(!chk(s[j])) {
                j--;
            } 
            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};