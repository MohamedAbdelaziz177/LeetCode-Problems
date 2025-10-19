class Solution {
public:
    
    vector<vector<int>>v;
    bool visited[55][55];
    int dfs(int i = 0, int j = 0)
    {
        visited[i][j] = true;
        int c = 1;

        if(valid(i + 1, j))
        c += dfs(i + 1, j);

        if(valid(i, j + 1))
        c += dfs(i, j + 1);

        if(valid(i - 1, j))
        c += dfs(i - 1, j);

        if(valid(i, j - 1))
        c += dfs(i, j - 1);

        return c;

    }

    bool valid(int i, int j)
    {
        return
        i < v.size() && 
        i >= 0 &&
        j < v[0].size() &&
        j >= 0 &&
        v[i][j] == 1 &&
        !visited[i][j];
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        this -> v = grid;
        memset(visited, false, sizeof(visited));
        int mx = 0;

        for(int i = 0; i< v.size(); i++)
        {
            for(int j = 0; j < v[0].size(); j++)
            {
                if(v[i][j] && !visited[i][j])
                mx = max(mx, dfs(i, j));
            }
        }

        return mx;
    }
};