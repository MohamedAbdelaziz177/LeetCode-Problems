class Solution {
public:
    
    bool visited[1000008] = {0};
    bool f = 0;

    void DFS(vector<vector<int>>& v, int i, int des){

        if(i == des) f = 1;
        if(visited[i]) return;
         visited[i] = 1;

        for(int n : v[i])
        {
            if(!visited[n])
            {
               
                if(n == des)
                {
                    f = 1;
                }

                DFS(v, n, des);

            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<vector<int>> v(n);

        for(int i = 0; i < edges.size(); i++)
        {
           v[edges[i][0]].push_back(edges[i][1]);
           v[edges[i][1]].push_back(edges[i][0]);

        }

        DFS(v, source, destination);
        

        return f;
    }
};