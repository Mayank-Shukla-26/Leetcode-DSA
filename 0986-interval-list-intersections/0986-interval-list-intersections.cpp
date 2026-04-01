class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList,
                                             vector<vector<int>>& secondList) {
        vector<vector<int>> res;
        int i = 0, j = 0;
        while (i < firstList.size() && j < secondList.size()) {
            int st1 = max(firstList[i][0], secondList[j][0]);
            int end1 = min(firstList[i][1], secondList[j][1]);

            if (st1 <= end1) {
                res.push_back({st1, end1});
            }
            if (firstList[i][1] < secondList[j][1]) {
                i++;
            } else {
                j++;
            }
        }
        return res;
    }
};