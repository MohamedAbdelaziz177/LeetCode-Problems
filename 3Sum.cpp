class Solution {
public:

    bool taken[100000] = {0};
    vector<vector<int>> threeSum(vector<int>& nums) {

        set<vector<int>>s;
        vector<vector<int>>vv;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++)
        {  
            int x = nums[i];
            int l = i + 1, r = nums.size() - 1;
            while(l < r)
            {
                if(nums[l] + nums[r] == -x)
                {
                    s.insert({x, nums[l], nums[r]});
                    l++;
                }

                else if(nums[l] + nums[r] > -x)
                {
                    r--;
                }

                else l++;

            }
            
        }

        for(auto x : s)
        {
            vv.push_back(x);
        }
        return vv;
    }
};