class Solution {
public:
    
    vector<vector<char>>v;
    bool visited[1000][1000];

    bool valid(int i, int j)
    {
       return (i < v.size() && j < v[0].size() && v[i][j] == '1' && !visited[i][j]);
    }

    void DFS(int i, int j)
    {
       
        visited[i][j] = true;

        if(valid(i + 1, j))
        DFS(i + 1, j);

        if(valid(i, j + 1))
        DFS(i, j + 1);

        if(valid(i - 1, j))
        DFS(i - 1, j);

        if(valid(i, j - 1))
        DFS(i, j - 1);



    }
    int numIslands(vector<vector<char>>& grid) {


          int c = 0;  
          memset(visited, false, sizeof(visited));
          v = grid;

          for(int i = 0; i < v.size(); i++)
          {
            for(int j = 0; j < v[0].size(); j++)
            {
                if(valid(i, j))
                {
                    DFS(i, j);
                    c++;
                }
            }
          }

          return c;
    }
};