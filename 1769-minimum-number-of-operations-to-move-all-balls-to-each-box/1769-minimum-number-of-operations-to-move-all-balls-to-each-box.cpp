class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> answer(n, 0);

        int count = 0, moves = 0;

        // Left to Right
        for(int i = 0; i < n; i++) {
            answer[i] += moves;
            if(boxes[i] == '1') count++;
            moves += count;
        }

        // Reset
        count = 0;
        moves = 0;

        // Right to Left
        for(int i = n - 1; i >= 0; i--) {
            answer[i] += moves;
            if(boxes[i] == '1') count++;
            moves += count;
        }

        return answer;
    }
};