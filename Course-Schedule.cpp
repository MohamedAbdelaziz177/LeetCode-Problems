class Solution {
public:
    bool visited[2005];
    int inDegree[2005];
    vector<int>graph[2005];

    int bfs_topo(int n)
    {
        queue<int>q;
        vector<int>v;
        
        for(int i = 0; i < n; i++)
        if(!inDegree[i])
        {
            q.push(i);
            v.push_back(i);
        }


        while(!q.empty())
        {
            auto node = q.front();
            q.pop();

            for(auto x : graph[node])
            {
                inDegree[x]--;
                if(!inDegree[x])
                {
                    q.push(x);
                    v.push_back(x);
                }
            }
        }

        return n == v.size();
    }

    bool canFinish(int n,
     vector<vector<int>>& v)
      {
        
        for(auto e : v)
        {
            graph[e[1]].push_back(e[0]);
            inDegree[e[0]]++;
        }

        return bfs_topo(n);
    }
};