class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int src) {
        vector<vector<pair<long long, long long>>> adj(n + 1);

        for (auto& time : times) {
            adj[time[0]].push_back({time[1], time[2]});
        }
        
        vector<long long> minDistance(n + 1, LLONG_MAX);
        minDistance[src] = 0;
        priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
        pq.push({0, src});

        while(!pq.empty()) {
            pair<long long, long long> node = pq.top();
            pq.pop();

            if (node.first > minDistance[node.second])
              continue;

            int dist = node.first;

            for(auto& [v, w] : adj[node.second]) {
                if(dist + w < minDistance[v]) {
                    int mn = minDistance[v] = dist + w;
                    pq.push({mn, v});
                }
            }
        }

        long long ans = 0;
        for(int i = 1; i <= n; i++) {
            ans = max(ans, minDistance[i]);
        }

        return (ans >= INT_MAX) ?  -1 : (int) ans;
    }
};