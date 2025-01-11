class Solution {
public:

    int n, m;
    int vals[105][105];
    vector<vector<int>>v;

    bool valid(int x, int y)
    {
        return x < n && y < m &&  v[x][y] != 1;
    }

    int count(int i = 0, int j = 0)
    {

        if(i == n - 1 && j == m - 1)
        {
            return 1;
        }

        if(vals[i][j] != -1) return vals[i][j];

        int c1 = 0, c2 = 0;

        if(valid(i + 1, j))
        c1 = count(i + 1, j);

        if(valid(i, j + 1))
        c2 = count(i, j + 1);

        return vals[i][j] = c1 + c2;


    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        
        v = obstacleGrid;
        this -> n = obstacleGrid.size();
        this -> m = obstacleGrid[0].size();

        if(v[0][0] == 1) return 0;

         memset(vals, -1, sizeof(vals));

        return count();
    }
};