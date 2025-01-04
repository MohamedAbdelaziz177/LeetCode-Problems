class RecentCounter {
public:
    int c;
    queue<int>q;
    RecentCounter() {
        c = 0;
    }
    
    int ping(int t) {
        
        if(q.empty()) q.push(t);
        else
        {
            while(!q.empty() && t - q.front() > 3000)
            {
                q.pop();
            }

            q.push(t);
        }

        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */