class Solution {
public:
    int longestOnes(vector<int>& v, int k) {
        
        int l = 0, r = 0, n = v.size(), ans = 0;
        map<int, int>mp;

        while(r < n)
        {
            mp[v[r]]++;
            while(mp[0] > k)
            {
                mp[v[l]]--;
                l++;
            }
            ans = max(ans, r - l + 1);
            r++;
        }

        return ans;
    }
};