class Solution {
public:

    vector<vector<int>>v;
    bool visited[1005];

    void DFS(int i = 0)
    {
        visited[i] = 1;

        for(auto e : v[i])
        {
            if(!visited[e]) DFS(e);
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        v = rooms;
        DFS();

        for(int i = 0; i < v.size(); i++)
        {
            if(!visited[i]) return 0;
        }

        return 1;

    }
};