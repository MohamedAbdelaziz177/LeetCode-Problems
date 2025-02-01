class Solution {
public:
    
    bool visited[205] = {0};

    void DFS(int i, vector<vector<int>>&v)
    {
        if(visited[i]) return;
        visited[i] = 1;

        for(int e : v[i])
        {
            if(!visited[e])
            DFS(e, v);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        vector<vector<int>>v(isConnected.size());

        for(int i = 0; i < isConnected.size(); i++)
            for(int j = 0; j < isConnected[0].size(); j++)
                 if(isConnected[i][j]) v[i].push_back(j);

        int ans = 0;

        for(int i = 0; i < isConnected.size(); i++)
        {
            if(!visited[i])
            {
                DFS(i, v);
                ans++;
            }
        }

        return ans;
            
        
    }
};