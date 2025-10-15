class Solution {
public:
    int maxArea(vector<int>& v) {
        
        int l = 0, r = v.size() - 1, ans = 0, mx = 0;

        while(l <= r)
        {
            mx = max(mx, min(v[l], v[r]) * (r - l));

            if(v[l] < v[r])
            l++;
            else r--;
        }

        return mx;
    }
};