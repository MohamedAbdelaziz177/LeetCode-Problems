class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size(), m = matrix[0].size();

        int l = 0, r = n * m - 1, mid;

        while(l <= r)
        {
            mid = (l + r) / 2;

            int i = mid / m, j = mid % m;

            if(target == matrix[i][j]) return true;
            else if(target > matrix[i][j]) l = mid + 1;
            else r = mid - 1;
        }
        
        return false;
    }
};