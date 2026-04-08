1class Solution {
2public:
3    
4    int minDistance(string s, string t) {
5        
6        int n = s.size() + 1;
7        int m = t.size() + 1;
8        long long dp[n][m];
9
10        for(int i = 0; i < n; i++) {
11            dp[i][0] = i;
12        }
13
14        for(int i = 0; i < m; i++) {
15            dp[0][i] = i;
16        }
17
18        for(int i = 1; i < n; i++) {
19            for(int j = 1; j < m; j ++) {
20                if(s[i -1] == t[j - 1]) {
21                    dp[i][j] = dp[i - 1][j - 1];
22                } else {
23                    dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
24                }
25            }
26        }
27
28        return dp[n - 1][m - 1];
29    }
30};