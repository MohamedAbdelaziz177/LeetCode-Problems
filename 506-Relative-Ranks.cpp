class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        priority_queue<pair<int, int>>pq;
        vector<string>ans(score.size());

        for(int i = 0; i < score.size(); i++) pq.push({score[i], i});

        int i = 1;
        while(!pq.empty())
        {
            int val = pq.top().first, idx = pq.top().second;

            if(i != 1 && i != 2 && i != 3) ans[idx] = to_string(i);
            else if(i == 1) ans[idx] = \Gold Medal\;
            else if(i == 2) ans[idx] = \Silver Medal\;
            else ans[idx] = \Bronze Medal\;

            i++;
            pq.pop();
        }

        return ans;
    }
};