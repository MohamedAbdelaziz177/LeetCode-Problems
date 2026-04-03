1class Solution {
2public:
3
4    int dp[110];
5    string s;
6
7    bool valid(int i, char x, char y){
8        return i < s.size() - 1 && ((x == '1') || (x == '2' && y <= '6'));
9    } 
10
11    int count(int i) {
12
13        if(i >= s.size())
14        return 1;
15
16        if(s[i] == '0')
17        return 0;
18
19        if(dp[i] != -1) return dp[i];
20
21        int c = count(i + 1);
22
23        int cc = 0;
24
25        if(valid(i, s[i], s[i + 1]))
26        cc = count(i + 2);
27
28        return dp[i] = c + cc;
29    }
30    int numDecodings(string s) {
31        this -> s = s;
32        memset(dp, -1, sizeof(dp));
33        return count(0);
34    }
35};