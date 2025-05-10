class Solution {
public:
    vector<int>v;
    long long dp[1000][2];

    int backtrack(int i, bool firstEleTaken)
    {
        if(i == v.size() - 1)
            if(firstEleTaken)
            return 0;
        

        if(i >= v.size())
        return 0;

        if(dp[i][(int)firstEleTaken] != -1)
        return dp[i][(int)firstEleTaken];

        int c1;
        
        if(i == 0)
        c1 = v[i] + backtrack(i + 2, true);
        else 
        c1 = v[i] + backtrack(i + 2, firstEleTaken);

        int c2;

        if(i == 0)
        c2 = backtrack(i + 1, false);
        else
        c2 = backtrack(i + 1, firstEleTaken);

        return dp[i][(int)firstEleTaken] = max(c1, c2);
    }
    int rob(vector<int>& nums) {
        
        memset(dp, -1, sizeof(dp));
        v = nums;
        return backtrack(0, 0);
    }
};