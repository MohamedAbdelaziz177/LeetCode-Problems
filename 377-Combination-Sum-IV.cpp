class Solution {
public:
    
    vector<int>v;
    int dp[1007];

    int recurse(int t)
    {
      if(t == 0)
      return 1;

      if(t < 0)
      return 0;

      if(dp[t] != -1)
      return dp[t];


      int ans = 0;
      for(auto x : v)
      ans += recurse(t - x);

      return dp[t] = ans;

    }

    int combinationSum4(vector<int>& nums, int target) {

       memset(dp, -1, sizeof(dp)); 
       v= nums;

       return recurse(target);
    }
};