1class Solution {
2public:
3     
4    int n;
5    vector<int> v;
6
7    int change(int n, vector<int>& v) {
8        this -> v = v;
9        this -> n = n;
10        unsigned long long dp[n + 1];
11        memset(dp, 0, sizeof(dp));
12
13        dp[0] = 1;
14
15       for (int j = 0; j < v.size(); j++){        
16            for(int i = 1; i <= n; i++) {
17                if(i >= v[j])
18                {
19                    dp[i] += dp[i - v[j]];
20                }
21            }
22        }
23
24        return dp[n];
25    }
26};