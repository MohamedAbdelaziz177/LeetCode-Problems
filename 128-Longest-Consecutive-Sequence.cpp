class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() < 2) return nums.size();

        map<int, int>mp;

        for(int i = 0; i < nums.size(); i++)
        mp[nums[i]]++;
        
       vector<int>v;

       for(auto x : mp) v.push_back(x.first);

       int ans = 0, c = 0;

       for(int i = 1; i < v.size(); i++)
       {
        if(v[i] - v[i - 1] <= 1) c++;
        else
        {
            ans = max(ans, c);
            c = 0;
        }
       }

       ans = max(ans, c);

       return ans + 1;
    }
};