class Solution {
public:
    vector<int> topKFrequent(vector<int>& v, int k) {
        
        map<int, int>mp;
        priority_queue<pair<int, int>>vp;

        for(int i = 0; i < v.size(); i++)
        mp[v[i]]++;

        for(auto el : mp)
        {
            vp.push({el.second, el.first});
        }

        vector<int>vv;

        int i = 0;

        while(i++ < k)
        {
            vv.push_back(vp.top().second);
            vp.pop();
        }
        
        return vv;

    }
};