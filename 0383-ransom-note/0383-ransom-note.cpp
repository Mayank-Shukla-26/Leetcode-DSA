class Solution {
public:
    bool fun(unordered_map<char, int> need, unordered_map<char, int> have) {
        for(auto i : need) {
            char c = i.first;
            int fneed = i.second;
            int fhave = have[c];

            if(fhave < fneed) {
                return false;
            }
        }
        return true;
    }

    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> have;
        unordered_map<char, int> need;

        for(int i=0; i<ransomNote.length(); i++) {
            need[ransomNote[i]]++;
        }
        for(int i=0; i<magazine.length(); i++) {
            have[magazine[i]]++;
        }

        return fun(need, have);
    }
};