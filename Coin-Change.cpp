class Solution {
public:

    int mn = INT_MAX;
    int  dp[100004];
    vector<int> v;

    long long minimize(int t)
    {
        if(t < 0)
          return INT_MAX;

        if(dp[t] != -1)
           return dp[t];

        if(t == 0)
            return 1;
    
        long long mn = INT_MAX;

        for(int i = 0; i < v.size(); i++)
            mn =  min(1 + minimize(t - v[i]), mn);

           return dp[t] = mn;  
    }

    int coinChange(vector<int>& v, int t) {

        this -> v = v;
        memset(dp, -1, sizeof(dp));

        long long ans = minimize(t);
        return (ans >= INT_MAX)? -1 : ans - 1;
    }
};