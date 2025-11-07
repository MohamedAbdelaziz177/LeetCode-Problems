class Solution {
public:
    int n, m;
    string s, ss;

    int dp[1005][1005];

    int check(int i = 0, int j = 0)
    {
        if(i == n || j == m)
        return 0;

        if(dp[i][j] != -1) return dp[i][j];

        if(s[i] == ss[j])
        return 1 + check(i + 1, j + 1);

        int c1 = check(i + 1, j);
        int c2 = check(i, j + 1);

        dp[i][j] = max(c1, c2);

        return dp[i][j];
    }
    int longestCommonSubsequence(string text1, string text2) {
        this -> n = text1.size(), this->m = text2.size();
        s = text1, ss = text2;
        memset(dp, -1, sizeof(dp));

        return check();

    }
};