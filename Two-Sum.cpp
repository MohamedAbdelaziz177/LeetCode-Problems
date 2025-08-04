class Solution {
public:
    vector<int> twoSum(vector<int>& v, int n) {
        
        map<int, int> mp;
        vector<int>ans;

        for(int i = 0; i < v.size(); i++)
        {
            if(mp[n - v[i]])
            {
                ans.assign({i, mp[n - v[i]] - 1});
            }
            
            mp[v[i]] = (i + 1);
        }

        return ans;
        
    }
};