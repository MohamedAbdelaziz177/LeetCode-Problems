class Solution {
public:
    
    vector<vector<int>>ans;
    vector<vector<int>> graph;
    bool visited[18] = {0};
    int n;

    void DFS(int i = 0, vector<int>temp = {} )
    {
       // if(visited[i]) return;

        visited[i] = 1;
        temp.push_back(i);

        if(i == n)
        {
            ans.push_back(temp);
            return;
        }

        for(auto e : graph[i])
           // if(!visited[e])
                DFS(e, temp);
            
        
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        this -> graph = graph;
        this -> n = graph.size() - 1;

        DFS(0);

        return ans;
    }
};