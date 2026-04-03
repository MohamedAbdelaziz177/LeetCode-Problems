1class Solution {
2public:
3    
4    vector<int>v;
5    int dp[205][20005];
6    int sum;
7
8    bool check(int i = 0, int s = 0) {
9
10        if(i == v.size()) {
11            if(2 * s == sum)
12            return true;
13
14            else return false;
15        }
16
17        if(dp[i][s] != -1)
18        return dp[i][s];
19
20        bool c = check(i + 1, s + v[i]);
21        bool cc = check(i + 1, s);
22
23        return dp[i][s] = c || cc;
24    }
25    bool canPartition(vector<int>& nums) {
26
27        for(auto n : nums)
28        sum += n;
29        memset(dp, -1, sizeof(dp));
30        this -> v = nums;
31        return check();
32    }
33};