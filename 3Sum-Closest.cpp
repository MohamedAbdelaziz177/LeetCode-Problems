class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());

        int mn = INT_MAX, ans = 0;
        for(int i = 0; i < nums.size() - 2; i++)
        {
            int l = i + 1, r = nums.size() - 1;
            int s = nums[i] + nums[l] + nums[r];
            bool f = 0, ff = 0;
            while(l < r)
            {
                if(f)
                {
                    s += nums[r];
                    f = 0;
                }

                if(ff)
                {
                    s += nums[l];
                    ff = 0;
                }

                if(s == target)
                    return s;

                else if(s > target)
                {
                    mn = min(mn, s - target);

                    if(mn == s - target)
                    ans = s;

                    s -= nums[r];
                    r--;
                    f = 1;
                }
                else {
                    
                    mn = min(mn, target - s);

                    if(mn == target - s)
                    ans = s;

                    s -= nums[l];
                    l++;
                    ff = 1;
                }
            }
        }
        return ans;
    }
};