class Solution {
public:
     
    
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int>pq;
        for(auto e : stones) pq.push(e);

        while(pq.size() > 1)
        {
            int n = pq.top();
            pq.pop();

            int m = pq.top();
            pq.pop();

            pq.push(abs(n - m));
        }

        return pq.top();
    }
};