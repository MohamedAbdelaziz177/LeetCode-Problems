class Solution {
public:
    vector<int>v;
    int dp[10005];

    long long mini(int i = 0)
    {
        if(i >= v.size() - 1)
        return 0;

        if(dp[i] != -1)
        return dp[i];

        long long mn = INT_MAX;
        for(int j = 1; j <= v[i]; j++)
          mn = min(mn, 1 + mini(i + j));

        return dp[i] = mn;
    }
    int jump(vector<int>& nums) {
        this -> v = nums;
        memset(dp, -1, sizeof(dp));
        return mini();
    }
};