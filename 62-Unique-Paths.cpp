class Solution {
public:

    int n, m;

    int vals[105][105];

    bool valid(int x, int y)
    {
        return x < n && y < m;
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

    int uniquePaths(int m, int n) {

        this -> m = n;
        this -> n = m;

        memset(vals, -1, sizeof(vals));

        return count();
        
    }
};