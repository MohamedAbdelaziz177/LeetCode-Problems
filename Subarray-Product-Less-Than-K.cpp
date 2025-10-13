class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int l = 0, r = 0, prod = 1, ans = 0;

        while(r < nums.size()){

            prod *= nums[r];

            while(prod >= k && l <= r)
            {
                prod /= nums[l];
                l++;
            }

            ans += r - l + 1;
            r++;
        }

        return ans;
    }
};