class Solution {
public:
    int minOperations(vector<int>& nums) {
        
       int l = 0, r = 2, ans = 0;

       while(r < nums.size())
       {
        if(nums[l] == 0)
        {
            nums[l] = 1;
            nums[l + 1] ^= 1;
            nums[l + 2] ^= 1;

            ans++;
        }

        l++, r++;

       }
        
       int sum = 0;
       for(int i = 0; i < nums.size(); i++) sum += nums[i];

       return (sum == nums.size())? ans : -1;
        
    }
};