1class Solution {
2public:
3    vector<vector<int>>v;
4    long long dp[100008];
5
6    long long maximize(int i = 0) {
7        if(i >= v.size()) return 0;
8        return (dp[i] != -1) ? dp[i] : dp[i] = max(v[i][0] + maximize(i + v[i][1] + 1), maximize(i + 1));
9    }
10
11    long long mostPoints(vector<vector<int>>& questions) {
12        memset(dp, -1, sizeof(dp));
13        v = questions;
14        return maximize();
15    }
16};