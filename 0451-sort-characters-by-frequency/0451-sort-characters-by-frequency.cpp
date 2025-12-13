class Solution {
public:
    string frequencySort(string s) {
        string res = "";

        unordered_map<char, int> freq;
        for(char c: s) {
            freq[c]++;
        }
        while(!freq.empty()) {
            char maxChar;
            int maxFreq = 0;

            for(auto [ch, count] : freq) {
                if(count > maxFreq) {
                    maxFreq = count;
                    maxChar = ch;
                }
            }

            res.append(maxFreq, maxChar);
            freq.erase(maxChar);
        }
        return res;
    }
};