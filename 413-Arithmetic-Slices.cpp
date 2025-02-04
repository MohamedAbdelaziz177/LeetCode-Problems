class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {

        int dp[10000];
        dp[0] = 0, dp[1] = 0;

        int c = 0;

        for(int i = 2; i < nums.size(); i++)
        {
            if(nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2])
            dp[i] = dp[i - 1] + 1;

            c += dp[i];
        }

        return c;
    }
};