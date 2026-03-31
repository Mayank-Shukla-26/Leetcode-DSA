class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        bool insert = false;
        int n = intervals.size();

        for(int i=0; i<n; i++) {
            if(insert == false && intervals[i][0] >= newInterval[0]) {
                res.push_back(newInterval);
                insert = true;
            }
            res.push_back(intervals[i]);
        }

        if(insert == false) {
            res.push_back(newInterval);
        }

        vector<vector<int>> ans;

        int st1 = res[0][0];
        int end1 = res[0][1];

        for(int i=1; i<res.size(); i++) {
            int st2 = res[i][0];
            int end2 = res[i][1];

            if(end1 >= st2) {
                st1 = st1;
                end1 = max(end1, end2);
                continue;
            }

            ans.push_back({st1, end1});
            st1 = st2;
            end1 = end2;
        }

        ans.push_back({st1, end1});
        return ans;
    }
};