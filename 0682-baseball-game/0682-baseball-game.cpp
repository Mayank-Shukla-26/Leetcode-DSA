class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> stack;

        for (string op : operations) {
            if (op == "+") {
                int last = stack.back();
                int secondLast = stack[stack.size() - 2];
                stack.push_back(last + secondLast);
            } else if (op == "D") {
                stack.push_back(2 * stack.back());
            } else if (op == "C") {
                stack.pop_back();
            } else {
                stack.push_back(stoi(op)); // convert string to int
            }
        }

        int sum = 0;
        for (int x : stack) {
            sum += x;
        }

        return sum;
    }
};