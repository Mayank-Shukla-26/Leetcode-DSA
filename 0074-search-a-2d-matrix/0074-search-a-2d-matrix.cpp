class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0; i<n; i++) {
            if(matrix[i][m-1] < target) {
                continue;
            } else {
                int st = 0;
                int end = m-1;
                while(st <= end) {
                    int mid = st + (end-st)/2;
                    if(matrix[i][mid] == target) return true;
                    if(matrix[i][mid] < target) {
                        st = mid + 1;
                    } else {
                        end = mid - 1;
                    }
                }
            }
        }

        return false;
    }
};