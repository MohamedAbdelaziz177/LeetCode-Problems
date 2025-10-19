class Solution {
public:
    vector<int> xorQueries(vector<int>& v, vector<vector<int>>& qs) {
        
        for(int i = 1; i < v.size(); i++)
        v[i] ^= v[i - 1];

        vector<int>ans;
        for(auto q : qs)
        {
            if(q[0] == 0)
            ans.push_back(v[q[1]]);
            else ans.push_back(v[q[1]] ^ v[q[0] - 1]);
        }

        return ans;
        
    }
};