class Solution {
public:
    
    int FindFirstAndLastPos(vector<int>& v, int n, int val, bool fORl)
    {
        int l = 0, r = n - 1, mid, ans = -1;

        while(l <= r)
        {
            mid = (l + r) / 2;

            if(v[mid] == val)
            {
                ans = mid;
                (fORl)? r = mid - 1 : l = mid + 1;
            }
            else if(v[mid] > val)
            r = mid - 1;
            
            else
            l = mid + 1;

        }

        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int FirstPos = FindFirstAndLastPos(nums, nums.size(), target, true);
        int LastPos = FindFirstAndLastPos(nums, nums.size(), target, false);

        vector<int>ans;
        ans.push_back(FirstPos);
        ans.push_back(LastPos);

        return ans;

    }
};