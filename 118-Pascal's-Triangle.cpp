class Solution {
public:
    vector<vector<int>> generate(int n) {

        vector<vector<int>> ans;

        for(int i = 0; i < n; i++)
        {
            vector<int>v;
            v.push_back(1);

            if(i == 0) {
                ans.push_back(v);
                continue;
            }

            for(int j = 1; j < i; j++)
            {
                v.push_back(ans[i - 1][j] + ans[i - 1][j - 1]);
            }

            v.push_back(1);
            ans.push_back(v);
        }

        return ans;        
        
    }
};