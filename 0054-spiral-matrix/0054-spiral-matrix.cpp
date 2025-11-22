class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int srow = 0, scol = 0, erow = matrix.size() - 1,
            ecol = matrix[0].size() - 1;

        while (srow <= erow && scol <= ecol) {

            for (int i = scol; i <= ecol; i++) {
                ans.push_back(matrix[srow][i]);
            }
            srow++;
            for (int i = srow; i <= erow; i++) {
                ans.push_back(matrix[i][ecol]);
            }
            ecol--;
            if (srow <= erow) {
                for (int i = ecol; i >= scol; i--) {
                    ans.push_back(matrix[erow][i]);
                }
                erow--;
            }
            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--) {
                    ans.push_back(matrix[i][scol]);
                }
                scol++;
            }
        }
        return ans;
    }
};