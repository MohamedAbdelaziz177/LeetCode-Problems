class Solution {
public:
    
    vector<vector<int>> grid;
    int n, m;

    long long vals[300][300];


    bool valid(int i, int j)
    {
        return i < n && j < m;
    }

    int dp(int i = 0, int j = 0)
    {

        if(vals[i][j] != -1)
        return vals[i][j];

        if(i == n - 1 && j == m - 1)
        return grid[i][j];

        
        int c1 = 1000000000, c2 = 1000000000;
        if(valid(i, j + 1))
        c1 = dp(i, j + 1);

        if(valid(i + 1, j))
        c2 = dp(i + 1, j);

        return vals[i][j] = (grid[i][j] + min(c1, c2));
    }

    int minPathSum(vector<vector<int>>& v) {
         grid = v;

        n = grid.size(), m = grid[0].size();
        memset(vals, -1, sizeof(vals));

        return dp();


    }
};